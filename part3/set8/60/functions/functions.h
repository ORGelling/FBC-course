#ifndef FUNCTIONS_INCLUDED
#define FUNCTIONS_INCLUDED

#include <unordered_map>
#include <vector>
#include <string>
#include <cmath>        // for the inlines

#include "../rulevalue/rulevalue.h"

class Functions
{
    public:
        using ArgVec = std::vector<double>;
        using MemFn  = RuleValue (Functions::*)(ArgVec const&) const;
        
        // angle mechanics:
        enum class AngleMode
        {
            RAD,
            DEG,
            GRAD
        };

    private:
        // currently used angle type, initialised as radians:
        AngleMode d_angleMode = AngleMode::RAD;
            
        static std::unordered_map<std::string, MemFn> const s_functions;

    public:
        RuleValue call_function(std::string const &fun, 
                                                ArgVec const &args) const;
        
        void set_angle_mode(AngleMode mode);
        
    private:
        RuleValue sin(ArgVec const &args) const;
        RuleValue asin(ArgVec const &args) const;
        RuleValue cos(ArgVec const &args) const;
        RuleValue acos(ArgVec const &args) const;
        RuleValue tan(ArgVec const &args) const;
        RuleValue atan(ArgVec const &args) const;
        
        RuleValue abs(ArgVec const &args) const;
        RuleValue exp(ArgVec const &args) const;
        RuleValue ln(ArgVec const &args) const;
        RuleValue sqrt(ArgVec const &args) const;
        
        // support functions for angles
        double to_radians(double value) const;
        double from_radians(double value) const;
        
        void argCount(ArgVec const &args, size_t size) const;
        void math_error(char const *msg) const;
};

inline void Functions::set_angle_mode(AngleMode mode)
{
    d_angleMode = mode;
}

#endif

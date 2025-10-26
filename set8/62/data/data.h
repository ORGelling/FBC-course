#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include "../enum/enum.h"
#include <string>

union Data
{
    private:
        static void (Data::*s_destroy[])();
        static void (Data::*s_copy[])(Data const &tmp);
        static void (Data::*s_move[])(Data &&tmp);
        static void (Data::*s_swap[][3])(Data &other);
        
        double *u_double;
        std::string u_word;
        size_t u_value;
    
    public:
        Data(double *doublePtr);
        Data(std::string const &word);
        Data(size_t value);
        Data(Data const &other) = delete;
        Data(Data const &other, Type type);
        Data(Data &&tmp, Type type);
        
        ~Data();
        void destroy(Type type);
        
        //Data &operator=(Data const &other);
        //Data &operator=(Data &&tmp);
        
        void swap(Type thisType, Data &other, Type otherType);
        
        // accessors
        double const *array() const;
        std::string const &word() const;
        size_t value() const;
        
        void setDouble(size_t const index, double const value);
        void setWord(std::string const &word);      // not const?
        void setValue(size_t const value);
        
    private:
        // move members
        void moveDouble(Data &&tmp);
        void moveString(Data &&tmp);
        void moveValue(Data &&tmp);
        // copy members
        void copyDouble(Data const &tmp);
        void copyString(Data const &tmp);
        void copyValue(Data const &tmp);
        
        // 9 swap members (oh god)
        void swap2Double(Data &other);      // check
        void swapDoubStr(Data &other);      // check
        void swapDoubVal(Data &other);      // check
        
        void swapStrDoub(Data &other);      // check // simplified
        void swap2String(Data &other);      // check
        void swapStrVal(Data &other);       // check
        
        void swapValDoub(Data &other);      // check // simplified
        void swapValStr(Data &other);       // check // simplified
        void swap2Value(Data &other);       // check
        
        // destroy members
        void destroyDouble();
        void destroyString();
        void destroyValue();
};

// making accessors inline

inline double const *Data::array() const
{
    return u_double;
}
inline std::string const &Data::word() const
{
    return u_word;
}
inline size_t Data::value() const
{
    return u_value;
}

inline void Data::setDouble(size_t const index, double const value)
{
    u_double[index] = value;
}
inline void Data::setWord(std::string const &word)
{
    u_word = word;
}
inline void Data::setValue(size_t const value)
{
    u_value = value;
}

#endif

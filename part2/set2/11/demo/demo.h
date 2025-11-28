#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

#include <string>
#include <iostream>

using namespace std;

class Demo
{
    string d_name;
    
    public:
        Demo(string name)
        :
            d_name(name)
        {
            cout << "Constructor of " << d_name << '\n';
        }
        Demo(Demo const &other)
        :
            d_name(other.d_name + " (copy)")
        {
            cout << "Copy constructor of " << d_name << '\n';
        }
        ~Demo()
        {
            cout << "Destructor of " << d_name << '\n';
        }
        
        void pitch()
        {
            Demo ball("'local object'");
            cout << "Pitching " << d_name << '\n';
            throw ball;
        }
        static void fastBall(Demo &receiver)
        {
            cout << "Fast pitch of " << receiver.d_name << '\n';
            throw receiver;
        }
        
        void snapShot() const
        {
            cout << "Snapshot of " << d_name << '\n';
        }
};
        
#endif

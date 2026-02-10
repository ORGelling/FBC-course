#include <iostream>

class Test1
{
    char const *d_filename;
    char const firstChar = d_filename[0];
    
    public:
        Test1(char const *name)
        :
            d_filename(name)
        {}
        
        void showChar()
        {
            std::cout << firstChar << '\n';
        }
};

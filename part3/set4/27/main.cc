#include "main.ih"

int main()
{
    Data data{ "-12", "1234.87", "string", "8", "46920" };

    cout << data.get<int>(0) << '\n';       
                            // returns d_data[3] converted to int or 0, if
                            // the conversion fails

    cout << data.get<long double>(1) << '\n';   
                            // returns d_data[1] converted to a long
                            // double or 0, if the conversion fails

    cout << data.get<string>(2) << '\n';
                            // returns d_data[2] as std::string const & 
    
    cout << data.get<size_t>(3) << '\n';    
    
    cout << data.get<int>(4) << '\n';
}

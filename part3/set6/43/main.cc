#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc != 3)
        throw string{"Provide input and output file names"};
    
    Scanner scanner{ string{ argv[1] }, string{ argv[2] } };
                                    // we have not implemented the tmp file 
    scanner.lex();                  // name class, as even this main function
}                                   // is not required for the exercise. We 
catch (string const &exc)           // use manual names here for testing.
{                                           
    cout << exc << '\n';                    
}

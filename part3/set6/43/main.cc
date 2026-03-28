#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc == 1)
        throw string{"Provide input file name as argv[1]"};
    
    string filename{ argv[1] };
    
    Scanner scanner{ filename, "out.txt" }; // Not properly using .tmp yet
    
    if (scanner.lex() == 0)
        cout << "end\n";
}                                           
catch (string const &exc)                   
{                                           
    cout << exc << '\n';                    
}

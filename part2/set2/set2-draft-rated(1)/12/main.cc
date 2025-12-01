// HB: rating: 1
// HB: LGTM

#include "main.ih"

int main(int argc, char **argv)
try
{
    try
    {
        if (argc == 1)
            throw "need an argument"s;
                                                // clunky, but not c-style
        //if (argv[1][0] >= '0' && argv[1][0] <= '9')
        if (isdigit(argv[1][0]))                    // compact and readable
            throw static_cast<size_t>(argv[1][0] - '0');
        
        throw invalid_argument{argv[1]};
    }
    catch (string const &warning)                           // Clause 1
    {
        cerr << "No arguments: " << warning << '\n';
        throw 1;
    }
    catch (size_t value)                                    // Clause 2
    {
        cerr << "Value: " << value << '\n';
        throw 2;
    }
    catch (exception const &exc)                            // clause 3
    {
        cerr << "Exception's what: " << exc.what() << '\n';
        throw 3;
    }
}
catch (int which)                                   // the pseudo "finally"
{
    cerr << "finally: always used, called from catch clause: " << which 
        << '\n';
}

#include "student.ih"

    // by 

namespace {
    
    string getName(vector<string> &tokens)
    {
        return accumulate(tokens.begin(), tokens.end() - 2, string(), 
            [](string const &lhs, string const &rhs)
            {
                return lhs.empty() ? rhs : lhs + " " + rhs;
            }
        );                                  // Why use a for loop when we 
    }                                       // can use a generic algorithm!

}

istream &Student::extractFrom(istream &source)
{
    string line;
    if (!getline(source, line))             // check EOF to stop extracting
    {
        source.setstate(ios::failbit);      // refactoring this is probably
        return source;                      // not worth the hassle?
    }
    
    istringstream iss(line);
    
    vector<string> tokens{ istream_iterator<string>{iss}, 
                                            istream_iterator<string>{} };
    d_score = stof(tokens.back());
    d_number = stoull(tokens[tokens.size() - 2]);
    d_name = getName(tokens);
    d_lastname = tokens[tokens.size() - 3];
    
    return source;
}
                                        // There is another option:
                                        // We can simply use string functions
                                        // to get the right parts. This does
                                        // make for a slightly more tricky
                                        // process cutting out blanks, espe-
                                        // cially from the full name member, 
                                        // but it's also more compact and
                                        // less roundabout. However, the pre-
                                        // vious answer uses containers and
                                        // iterators according to recent
/*                                      // course materials, so seems fitting.
namespace {
    static string const digits = "0123456789";
    static string const spaces = " \t\n\r\f\v";
    
    string trim(string const &str)
    {
        size_t start = str.find_first_not_of(spaces);
        size_t end = str.find_last_not_of(spaces);
        return str.substr(start, end - start + 1);
    }

    string setAndErase(string &from, size_t end)    // bite off current value
    {
        string tmp = from.substr(0, end + 1);
        from.erase(0, end + 1);
        return trim(tmp);
    }
}

istream &Student::extractFrom(istream &source)
{
    string line;
    if (!getline(source, line))             // checking EOF
    {
        source.setstate(ios::failbit);
        return source;
    }
    
    d_name = setAndErase(line, line.find_first_of(digits) - 1);
    d_number = stoull(setAndErase(line, line.find_first_of(spaces)));
    d_score = stof(line);
                                            // set members
    d_lastname = d_name.substr(d_name.find_last_of(spaces) + 1);
                                            // isolate last name for sorting
    return source;
}*/ 

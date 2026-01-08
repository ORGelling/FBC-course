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

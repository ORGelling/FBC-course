#include "student.ih"

    // by 

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
}

#include "Person.ih"
#include <string>

/* extract: expects an std::istream, and extracts the information from the
 * next line of the istream, where the elements are separated from each
 * other by comma's (the last element is not followed by a comma).
 * Extraction is performed in the order of the class Person's data members.
 * You may assume that the provided input corresponds to this specification,
 * but ensure that if your input consists of multiple lines that subsequent
 * extract calls processes those lines. */

// Hint: to read all characters from the input istream into a string object,
// until a specified separator, whereafter the separator itself is skipped use
// getline.
void Person::extract(std::istream &input)
{
    getline(input, d_name, ',');
    getline(input, d_address, ',');
    getline(input, d_phone, ',');
    std::string mass;
    getline(input, mass);
    d_mass = mass.empty() ? 0 : stoul(mass);
}

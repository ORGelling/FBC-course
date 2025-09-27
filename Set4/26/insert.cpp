#include "Person.ih"

/* insert: expects an std::ostream, and inserts the information about the
 * person into the ostream that's passed as argument to insert; */
void Person::insert(std::ostream &stream) const {
    stream << "Name: " << d_name << '\n'
           << "Address: " << d_address << '\n'
           << "Phone: " << d_phone << '\n'
           << "Weight: " << d_mass << '\n';
}

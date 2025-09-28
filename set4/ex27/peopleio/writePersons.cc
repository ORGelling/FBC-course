#include "peopleio.ih"

void writePersons(Person const* persons, std::size_t size)
{
    for (std::size_t i = 0; i != size; ++i)
        persons[i].insert(std::cout);
}


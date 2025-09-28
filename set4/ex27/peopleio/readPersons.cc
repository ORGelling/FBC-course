#include "peopleio.ih"

void readPersons(Person* persons, std::size_t size)
{
    std::cout << "Please give name, address, phone nr, mass\n";
    for (std::size_t i = 0; i != size; ++i)
    {
        std::cout << "? ";
        persons[i].extract(std::cin);
    }
}


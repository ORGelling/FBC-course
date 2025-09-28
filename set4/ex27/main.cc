#include "main.ih"
#include <vector>
#include <cstddef>

int main(int argc, char *argv[])
{
    std::size_t arraySize = (argc == 2 ? std::stoul(argv[1]) : 5);

    std::vector<Person> people(arraySize);

    readPersons(people.data(), people.size());
    writePersons(people.data(), people.size());
}


#ifndef INCLUDED_PEOPLEIO_H_
#define INCLUDED_PEOPLEIO_H_

#include <cstddef>
#include "person.h"

// Reads size Persons from stdin, prompting with "? " before each line.
void readPersons(Person* persons, std::size_t size);

void writePersons(Person const* persons, std::size_t size);

#endif


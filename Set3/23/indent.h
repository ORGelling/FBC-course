#ifndef INDENT_H_
#define INDENT_H_

#include <iostream>

std::ostream &indented_cout();
void indent_less();
void indent_more();
void reset_indentation();
void step_size(size_t const stepSize);

#endif

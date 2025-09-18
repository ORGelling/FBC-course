#ifndef EX_18_HEADER_
#define EX_18_HEADER_

#include <iostream>

struct ReturnValues;

ReturnValues combine(size_t argc, char *argv[]);
bool structCall(size_t argc, char *argv[]);
void boundCall(size_t argc, char *argv[]);
void usage();
void show(ReturnValues showStruct);

#endif

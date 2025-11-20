#include "arglongoption.ih"

void ArgLongOption::addValue(Option *ptr)
{
                                        // enlarge room for args
    string **tmp = new string *[ptr->size + 1];
                                        // copy the pointers
    memcpy(tmp, ptr->optVal, sizeof(string *) * ptr->size);
    delete[] ptr->optVal;               // delete the old ptrs

    ptr->optVal = tmp;                  // activate the new ptrs
                                        // store the new optarg
    ptr->optVal[ptr->size++] = optarg ? new string{optarg} : 0;
}

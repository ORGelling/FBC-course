#include "argoption.ih"

    // see arglongoption/addvalue.cc for stmnt comment

void ArgOption::addValue(Option *ptr)
{
                                        // enlarge room for args
    string **tmp = new string *[ptr->size + 1];      
    memcpy(tmp, ptr->optVal, sizeof(string *) * ptr->size);
    delete[] ptr->optVal;

    ptr->optVal = tmp;
    ptr->optVal[ptr->size++] = optarg ? new string{optarg} : 0;
}

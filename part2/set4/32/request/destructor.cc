#include "request.ih"

Request::~Request()
{
    delete d_base;
}

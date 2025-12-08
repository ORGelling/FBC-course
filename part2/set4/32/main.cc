#include "main.ih"

int main()
{
    Request req;

    Base &base = req.base();

    base.run();
}


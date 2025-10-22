#include "handler.ih"

    // by 

Handler::Handler(size_t argc, char **argv)
:
    d_argc(argc - 1),
    d_argv(++argv)
{}

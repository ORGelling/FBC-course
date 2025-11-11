#include "strings.ih"

extern char **environ;

char **Strings::copyEnvs()
{
    size_t size = count(environ);
    char **ret = new char *[size + 1]();
    
    for (size_t index = 0; index != size; ++index)
        ret[index] = ntbsCopy(environ[index]);
    
    return ret;
}

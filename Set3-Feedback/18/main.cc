//JB: 0
#include "main.ih"

int main(int const argc, char const *argv[])
{
    if (argc == 1)
    {
        usage();                            // Correct use validation
        return 0;
    }
    
    if (!structCall(argc, argv))            // return 0 for false, else
        return 0;                           // boundCall will break
    
    boundCall(argc, argv);
}

/* JB:
 * You're using main.ih for main, but also for the functions in the library.
 * That is not how we want you to work. We write a bunch of functions that
 * we wish to present to the rest of the world. So we declare them in a
 * public header file, where the world, and main.cc, can see them.
 * That public header file should be lean. But perhaps implementing the
 * functions requires more than merely declaring them. Whatever extra is
 * required goes into the internal header... of the library.
 * That internal header may be fat. It can be precompiled to reduce the load
 * on the compiler. It is the only thing our functions include.
 * It makes sense to also have an internal header for main, but that is a
 * different one from the one we include in all of our functions.
 * Don't mix them up.
 */

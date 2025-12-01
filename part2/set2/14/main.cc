#include "main.ih"

int main()
try
{
    TempFile temp;
    temp.stream() << "currently linked\n";
    temp.stream().flush();
    
    fstream grab = move(temp);
    
    cout << "unlinked, still around?\n";
    
    grab << "unlinked, still around!\n";        // adding more contents
    grab.flush();
    grab.seekg(0);
    cout << grab.rdbuf();                   // reading what's in the file
    
    grab.close();                       // closes and lets file finally die
}
catch (...)
{
    return handleExceptions();
}                                       // Handle ctor exceptions here

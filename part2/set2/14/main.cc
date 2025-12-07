#include "main.ih"

int main()
try
{
    cout << "Creating and writing a line to file\n";
    
    TempFile temp;
    temp.stream() << "This line was written while the file was linked\n";
    temp.stream().flush();
    
    //char stall;
    //cin >> stall;
    
    fstream grab = move(temp);
    
    cout << "File has been unlinked\n";
    
    grab << "Writing this line when the file is already unlinked\n";
    grab.flush();
    grab.seekg(0);
    cout << "\nWriting to and reading from removed file:\n\n" << grab.rdbuf();
    
    //cin >> stall;
    
    grab.close();                       // closes and lets file finally die
    
    //cin >> stall;
}
catch (...) 
{
    return handleExceptions();
}                                       // Handle ctor exceptions here

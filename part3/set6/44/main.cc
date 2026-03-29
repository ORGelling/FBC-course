#include "main.ih"

int main()
{
    Scanner scanner;                // read from cin
    
    scanner.lex();
    
    scanner.showCounts();
}                                       // we have left the member line()
                                        // in for the potential use of 
                                        // the lines without lineNrs in a 
                                        // NEWLINE case inside a switch. 
                                        // Currently main does not need to do
                                        // much other than call showCounts, 
                                        // as the scanner goes through the
                                        // file in a single fell swoop.

#include "main.ih"

int main(int argc, char *argv[])
{
    Numbers empty;
    Numbers emptySet{ 8 };
    Numbers simpleSet{ 10, 42 };
    
    cerr << "test length(): " << simpleSet.length() << '\n';
    cerr << "test data(), should be a pointer: " << simpleSet.data() << '\n';
    
    cerr << "test at(): " << simpleSet.at(0) << '\n';
   
    cerr << "\ntest write:\nempty:\n";
    empty.write(cerr);
    cerr << "emptySet:\n";
    emptySet.write(cerr);
    
    cerr << "\nfilling emptySet with values\n";
    emptySet.at(0) = 6;
    emptySet.at(1) = 9;
    emptySet.at(2) = 4;
    emptySet.at(3) = 2;
    emptySet.at(4) = 0;
    emptySet.at(5) = 1;
    emptySet.at(6) = 3;
    emptySet.at(7) = 7;
    
    cerr << "\nempty:\n";
    empty.write(cerr);
    cerr << "emptySet:\n";
    emptySet.write(cerr);
    cerr << "simpleSet:\n";
    simpleSet.write(cerr);
   
    cerr << "\ntest copy assignment:\nempty:\n";
    empty = emptySet;
    empty.write(cerr);
    
    cerr << "\ntest move assignment:\nempty:\n";
    empty = move(simpleSet);
    empty.write(cerr);
    cerr << "simpleSet:\n";
    simpleSet.write(cerr);
    
    cerr << "\ntest copy constructor:\ncopyInto:\n";
    Numbers copyInto{ emptySet };
    copyInto.write(cerr);
    
    cerr << "\ntest move constructor:\nmoveInto:\n";
    Numbers moveInto{ move(copyInto) };
    moveInto.write(cerr);
    cerr << "copyInto:\n";
    copyInto.write(cerr);
}

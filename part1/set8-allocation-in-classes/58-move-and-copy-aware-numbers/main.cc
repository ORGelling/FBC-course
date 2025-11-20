#include "main.ih"

int main(int argc, char *argv[])
{
    Numbers empty;
    Numbers emptySet{ 8 };
    Numbers simpleSet{ 10, 42 };
    
    cout << "test length(): " << simpleSet.length() << '\n';
    cout << "test data(), should be a pointer: " << simpleSet.data() << '\n';
    
    cout << "test at(): " << simpleSet.at(0) << '\n';
   
    cout << "\ntest write:\nempty:\n";
    empty.write(cout);
    cout << "emptySet:\n";
    emptySet.write(cout);
    
    cout << "\nfilling emptySet with values\n";
    emptySet.at(0) = 6;
    emptySet.at(1) = 9;
    emptySet.at(2) = 4;
    emptySet.at(3) = 2;
    emptySet.at(4) = 0;
    emptySet.at(5) = 1;
    emptySet.at(6) = 3;
    emptySet.at(7) = 7;
    
    cout << "\nempty:\n";
    empty.write(cout);
    cout << "emptySet:\n";
    emptySet.write(cout);
    cout << "simpleSet:\n";
    simpleSet.write(cout);
   
    cout << "\ntest copy assignment:\nempty:\n";
    empty = emptySet;
    empty.write(cout);
    
    cout << "\ntest move assignment:\nempty:\n";
    empty = move(simpleSet);
    empty.write(cout);
    cout << "simpleSet:\n";
    simpleSet.write(cout);
    
    cout << "\ntest copy constructor:\ncopyInto:\n";
    Numbers copyInto{ emptySet };
    copyInto.write(cout);
    
    cout << "\ntest move constructor:\nmoveInto:\n";
    Numbers moveInto{ move(copyInto) };
    moveInto.write(cout);
    cout << "copyInto:\n";
    copyInto.write(cout);
}

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string hw = "Hello World\n";
    ostringstream ostr(hw, ios::app);
    
    ostr.setf(ios::showbase);
    ostr.setf(ios::hex, ios::basefield);
    ostr << 12345;
    
    cout << ostr.str() << '\n';
    
    ostr << "--";
    ostr.unsetf(ios::hex);
    ostr << 12;
    
    cout << ostr.str() << '\n';
    ostr.str("reset");
    cout << ostr.str() << '\n';
    
    ostr.seekp(3, ios::beg);
    ostr << "t easy\n";
    
    cout << ostr.str();
    
    //string copy = ostr.str();
    
    //ostr.str("Goodbye night sky\n");
    
    //cout << copy;
    
    //ostr << "Goodbye programmer\n";
    
    //cout << ostr.str();
    
    //int x = 1;
    //char set[] = "Hello world\n";
    //char *buffer = set;
    
    //cout.write(buffer, stoull(argv[1]));
    //cout.write(reinterpret_cast<char const *>(&x), sizeof(int));
    
    
    //fstream out("stream.txt", ios::in | ios::out | ios::ate);
    //out << "hello3\n";
    //out << "world3\n";
    
    
    //ofstream out("stest.txt");
    //out << "See here!";
    
    //streampos pos = out.tellp();
    
    //cout << pos << '\n';
    
    //out.flush();
    //getchar();
    
    //out.seekp(-4, ios::cur);
    
    //out << " and here!\n";
    
    //cout << out.tellp() << '\n';
    
    //string str = "Testing streams is quite fun!\n";
    //cout << str;
    
    //cout << cout.tellp() << '\n';
    
    //char ch = '&';
    //cout.put(ch);
    //cout.put('\n');
    //getline(cin, str);
    //cout << cin.eof() << '\n';
    //cout << cin.fail() << '\n';
    
    //getline(cin, str);
    //cout << cin.fail() << '\n';
}

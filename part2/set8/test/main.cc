#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <filesystem>

using namespace std;
using namespace chrono;
namespace fs = filesystem;

int main(int argc, char **argv)
try
{
    for (auto entry : fs::directory_iterator("."))
    {
        if (entry.is_regular_file())
        {
            auto ext = entry.path().extension();
            if (ext == ".cpp" or ext == ".cc" or ext == ".cxx")
                cout << entry << '\n';
        }
    }
}
catch (...)
{
    //cout << argv[0] << " needs a non-negative integral first argument\n";
}

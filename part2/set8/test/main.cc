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
    for (auto entry : fs::recursive_directory_iterator(argv[1]))
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
    cout << "Don't fuck up the input args lmao\n";
}

#include "test.ih"
#include <cstdlib>   
#include <stdexcept> 
using std::cout;
using std::string;

ReturnValues combine(int argc, const char* argv[]) {
    ReturnValues rv{false, 0, ""};

    if (argc <= 1) {                 
        return rv;                    
    }

    std::size_t n = 0;
    try {
        n = std::stoull(string(argv[1]));  
    } catch (...) {
        return rv; 
    }

    rv.nr = n;

    if (n < static_cast<std::size_t>(argc)) {
        rv.ok = true;
        rv.value = argv[n];
    }

    return rv;
}

bool structCall(int argc, const char* argv[]) {
    ReturnValues r = combine(argc, argv);

    if (!r.ok) {
        cout << "Usage: " << argv[0] << " N arg1 arg2 ...\n"
             << "Example: " << argv[0] << " 2 hello world   -> prints 'hello'\n";
        return false;  
    }

    cout << "structCall: argument #" << r.nr << " = " << r.value << "\n";
    return true;
}

void boundCall(int argc, const char* argv[]) {
    auto [ok, nr, value] = combine(argc, argv);
    if (ok) {
        cout << "boundCall:  argument #" << nr << " = " << value << "\n";
    } else {
        cout << "(boundCall) invalid request.\n";
    }
}

int main(int argc, const char* argv[]) {
    if (argc == 1) {
        cout << "Usage: " << argv[0] << " N arg1 arg2 ...\n";
        return 0;
    }

    if (!structCall(argc, argv)) {
        return 0; 
    }

    boundCall(argc, argv);
    return 0;
}


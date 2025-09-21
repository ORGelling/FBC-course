#include "test.ih"

long long sum(int argc, const char* argv[]) {
    long long total = 0;
    for (int i = 1; i < argc; ++i) {
        total += std::stoll(std::string(argv[i]));
    }
    return total;
}

double sum(int argc, const char* argv[], const char*) {
    double total = 0.0;
    for (int i = 1; i < argc; ++i) {
        total += std::stod(std::string(argv[i]));
    }
    return total;
}

int main(int argc, const char* argv[]) {
    if (argc == 1) {
        std::cout << "Usage: " << argv[0] << " numbers...\n";
        return 0;
    }

    bool hasDot = false;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]).find('.') != std::string::npos) {
            hasDot = true; break;
        }
    }

    if (hasDot) {
        std::cout << sum(argc, argv, "double") << '\n';
    } else {
        std::cout << sum(argc, argv) << '\n'; 
    }
}


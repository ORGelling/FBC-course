#include <iostream>
#include <string>
#include <cctype>
#include "test.ih"

void print_usage(const char* prog) {
    std::cerr << "Usage: " << prog << " [-c | -w | -l]\n"
              << "  -c : count characters\n"
              << "  -w : count words (whitespace-delimited)\n"
              << "  -l : count lines (number of '\\n')\n";
}

std::size_t count_chars(std::istream& in) {
    std::size_t n = 0;
    char ch;
    while (in.get(ch)) ++n;
    return n;
}

std::size_t count_words(std::istream& in) {
    std::size_t n = 0;
    bool inWord = false;
    char ch;
    while (in.get(ch)) {
        if (std::isspace(static_cast<unsigned char>(ch))) {
            inWord = false;
        } else {
            if (!inWord) { ++n; inWord = true; }
        }
    }
    return n;
}

std::size_t count_lines(std::istream& in) {
    std::size_t n = 0;
    char ch;
    while (in.get(ch)) if (ch == '\n') ++n;
    return n;
}

int main(int argc, char* argv[]) {
    if (argc != 2) { print_usage(argv[0]); return 1; }

    std::string flag = argv[1];
    if (flag == "-c") {
        std::cout << count_chars(std::cin) << "\n";
    } else if (flag == "-w") {
        std::cout << count_words(std::cin) << "\n";
    } else if (flag == "-l") {
        std::cout << count_lines(std::cin) << "\n";
    } else {
        print_usage(argv[0]);
        return 1;
    }
    return 0;
}


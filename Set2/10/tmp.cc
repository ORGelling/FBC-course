#include <iostream>

int main() {
    std::string line;
    std::getline(std::cin, line);

    auto const start = line.find_first_not_of(" \t");
    auto const end = line.find_last_not_of(" \t");

    std::cout << line.substr(start, end - start + 1) << '\n';
}

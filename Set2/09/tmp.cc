#include <iostream>
#include <string>

int main() {
    size_t countA = 0;
    size_t countE = 0;
    size_t countI = 0;

    std::string line;
    while (std::getline(std::cin, line)) {
        std::cout << line << '\n'; // debug
        for (auto const &c : line) {
            if (c == 'a' || c == 'A')
                ++countA;
            else if (c == 'e' || c == 'E')
                ++countE;
            else if (c == 'i' || c == 'I')
                ++countI;
        }
    }

    std::cout << "# a-chars: " << countA << ", " << "# e-chars: " << countE
              << ", " << "# i-chars: " << countI << '\n';
}

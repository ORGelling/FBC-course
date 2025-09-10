#include <iostream>
#include <string>

int main() {
    size_t countC = 0;
    size_t countA = 0;
    size_t countI = 0;

    std::string line;
    while (std::getline(std::cin, line)) {
        std::cout << line;
        for (auto const &c : line) {
            if (c == 'a' || c == 'A')
                ++countC;
            else if (c == 'c' || c == 'C')
                ++countA;
            else if (c == 'i' || c == 'I')
                ++countI;
        }
    }

    std::cout << "# a-chars: " << countA << ", " << "# e-chars: " << countC
              << ", " << "# i-chars: " << countI << '\n';
}

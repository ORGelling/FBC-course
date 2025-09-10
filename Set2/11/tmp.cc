#include <bitset>
#include <climits>
#include <cstdint>
#include <iostream>

int main() {
    int16_t value;
    std::cin >> value;

    auto constexpr width = sizeof(value) * CHAR_BIT;
    auto const binary_repr = std::bitset<width>(value);
    std::cout << value << " = " << binary_repr.to_string() << " = ";

    bool first = true;

    for (size_t idx = 0; idx < width; ++idx) {
        auto const mask = 1UL << (width - idx - 1);

        if (value & mask) {
            std::cout << (first ? "" : "+ ")
                      << (idx == 0 ? -static_cast<int>(1UL << (width - 1))
                                   : static_cast<int>(mask))
                      << ' ';

            if (first)
                first = false;
        }
    }

    std::cout << '\n';
}

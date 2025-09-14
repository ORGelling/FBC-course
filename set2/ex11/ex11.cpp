#include <bitset>
#include <climits>
#include <cstdint>
#include <iostream>
#include <limits>

int main() {
    int16_t value;
    std::cin >> value;

    constexpr std::size_t width = sizeof(value) * CHAR_BIT;

    // build bit string from the unsigned view (avoids surprises for negatives)
    std::bitset<width> binary_repr(static_cast<uint16_t>(value));
    std::cout << value << " = " << binary_repr.to_string() << " = ";

    bool first = true;
    uint16_t u = static_cast<uint16_t>(value);          // work with unsigned bits

    for (std::size_t idx = 0; idx < width; ++idx) {
        uint16_t mask = uint16_t(1) << (width - idx - 1); // MSB first

        if (u & mask) {
            std::cout << (first ? "" : "+ ")
                      << (idx == 0
                          ? std::numeric_limits<int16_t>::min() // MSB = -2^(width-1)
                          : static_cast<unsigned>(mask))
                      << ' ';
            if (first) first = false;
        }
    }

    if (first) std::cout << '0'; // handle value == 0
    std::cout << '\n';
}


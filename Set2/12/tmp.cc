#include <iostream>

int main(int argc, char *argv[]) {
    std::string digits = argv[1];
    size_t sum;

    do {
        sum = 0;
        for (auto const digit : digits)
            sum += digit - '0'; // get int value

        digits = std::to_string(sum);
    } while (sum >= 10);

    std::cout << (sum % 3 ? "not " : "") << "divisible by 3" << '\n';
}

#include "main.ih"

int main()
{
    cout << I2C<123>::s_ntbs << '\n' <<     // shows 123
            I2C<0>::s_ntbs << '\n' <<       // shows 0
            I2C<133769420>::s_ntbs << '\n';

    string value{ I2C<15937>::s_ntbs };

    cout << value << '\n';                  // shows 15937
}

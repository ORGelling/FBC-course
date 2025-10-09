#include "main.ih"

int main()
{
    string const *phone = phoneBook().get("Jurjen");    // request a nr
    cout << (phone == 0 ? "not available" : *phone) << '\n';

    phone = phoneBook().get("William");                 // request another nr
    cout << (phone == 0 ? "not available" : *phone) << '\n';
}

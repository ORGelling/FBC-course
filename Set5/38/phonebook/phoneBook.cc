#include "main.ih"

PhoneBook &phoneBook()
{
    static PhoneBook phoneBook;
    return phoneBook;
}

#include "phonebookhelper.ih"

PhoneBook &phoneBook()
{
    static PhoneBook phoneBook;
    return phoneBook;
}

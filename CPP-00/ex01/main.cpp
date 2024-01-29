#include "PhoneBook.hpp"
#include <iostream>

int main() {

    PhoneBook phonebook;
    std::string input = "";

    phonebook.start();
    
    while (input.compare("EXIT") != 0) {
        std::cout << "Your command: ";
        std::cin >> input;
        if (input.compare("ADD") == 0) {
            phonebook.addContact();
        }
        else if (input.compare("SEARCH") == 0) {
            phonebook.displayContacts();
            phonebook.searchContact();
        }
    }

    phonebook.exit();

    return 0;

}
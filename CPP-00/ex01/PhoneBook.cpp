#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

PhoneBook::PhoneBook(void) : _contactIndex(0) {
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

void PhoneBook::start(void) {
    std::cout << "" << std::endl;
    std::cout << "Welcome. Please enter one the following commands:" << std::endl << std::endl;
    std::cout << "  ADD : add a contact to the phonebook" << std::endl;
    std::cout << "  SEARCH : display all the phonebook contacts" << std::endl;
    std::cout << "  EXIT : exit the phonebook" << std::endl;
    std::cout << "" << std::endl;
}

void PhoneBook::addContact(void) {

    Contact newContact;
    std::string input;

    std::cout << "ADDING A CONTACT: " << std::endl << std::endl;

    while (std::getline(std::cin, input) && (input.empty()))
        std::cout << "Please enter the firstname (cannot be empty): " << std::endl;
    newContact.setFirstName(input);

    std::cout << "Please enter the lastname: " << std::endl;
    while (std::getline(std::cin, input) && (input.empty()))
        std::cout << "Lastname cannot be empty. Enter the lastname: ";
    newContact.setLastName(input);

    std::cout << "Please enter the nickname: " << std::endl;
    while (std::getline(std::cin, input) && (input.empty()))
        std::cout << "Nickname cannot be empty. Enter the nickname: ";
    newContact.setNickName(input);

    std::cout << "Please enter the phonenumber: " << std::endl;
    while (std::getline(std::cin, input) && (input.empty()))
        std::cout << "Phonenumber cannot be empty. Enter the phonenumber: ";
    newContact.setPhoneNumber(input);

    std::cout << "Please enter the darkest secret: " << std::endl;
    while (std::getline(std::cin, input) && (input.empty()))
        std::cout << "Darkest secret cannot be empty. Enter the darkest secret: ";
    newContact.setDarkestSecret(input);

    _contacts[_contactIndex % 8] = newContact;
    _contactIndex++;

    std::cout << "Your contact has been saved !" << std::endl;

}

void PhoneBook::displayContacts(void) {
    int i = 0;

    std::cout << "CONTACT DISPLAY: " << std::endl << std::endl;
    while (i < std::min(_contactIndex, 8)) {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << _truncateString(_contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << _truncateString(_contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << _truncateString(_contacts[i].getNickName()) << std::endl;
        i++;
    }
    std::cout << std::endl;
}

std::string PhoneBook::_truncateString(std::string str) const {
    if (str.length() > 10) {
        str = str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::searchContact(void) {
    int inputIndex;

    std::cout << "Please enter the contact index you want to see: ";
    std::cin >> inputIndex;
    if (inputIndex < 0 || inputIndex > std::min(_contactIndex, 8) || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index." << std::endl;
        return ;
    }
    std::cout << "CONTACT INFORMATION: " << std::endl << std::endl;

    Contact contact = _contacts[inputIndex];

    std::cout << "Firstname: " << contact.getFirstName() << std::endl;
    std::cout << "Lastname: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickName() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
    std::cout << std::endl;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void PhoneBook::exit(void) {
    std::cout << "Thank you for using our PhoneBook. Goodbye." << std::endl;
}
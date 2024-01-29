#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

public:

    PhoneBook(void);
    ~PhoneBook(void);

    void start(void);
    void addContact(void);
    void displayContacts(void);
    void searchContact(void);
    void exit(void);

private:
    Contact     _contacts[8];
    int         _contactIndex;
    std::string _truncateString(std::string str) const;

};

#endif
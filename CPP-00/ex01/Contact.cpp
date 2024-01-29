#include "Contact.hpp"
#include <iostream>

/**************
* Constructor *
**************/
Contact::Contact(void) {
    return;
}

/***************
*  Destructor  *
***************/
Contact::~Contact(void) {
    return;
}

/**************
*  Accessors  *
***************/

//Getters (const because read-access only)
std::string Contact::getFirstName(void) const {
    return this->_firstname;
}

std::string Contact::getLastName(void) const {
    return this->_lastname;
}

std::string Contact::getNickName(void) const {
    return this->_nickname;
}

std::string Contact::getPhoneNumber(void) const {
    return this->_phonenumber;
}

std::string Contact::getDarkestSecret(void) const {
    return this->_darkestsecret;
}

//Setters
void Contact::setFirstName(std::string fname) {
    this->_firstname = fname;
}

void Contact::setLastName(std::string lname) {
    this->_lastname = lname;
}

void Contact::setNickName(std::string nname) {
    this->_nickname = nname;
}

void Contact::setPhoneNumber(std::string pnumber) {
    this->_phonenumber = pnumber;
}

void Contact::setDarkestSecret(std::string dsecret) {
    this->_darkestsecret = dsecret;
}
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

public:
    Contact(void);
    ~Contact(void);

    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickName(void) const;
    std::string getPhoneNumber(void) const;
    std::string getDarkestSecret(void) const;

    void setFirstName(std::string fname);
    void setLastName(std::string lname);
    void setNickName(std::string nname);
    void setPhoneNumber(std::string pnumber);
    void setDarkestSecret(std::string dsecret);

private:
    std::string _firstname;
    std::string _lastname;
    std::string _phonenumber;
    std::string _nickname;
    std::string _darkestsecret;
    int         _index;

};

#endif
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact();
		~Contact();
        Contact (
			std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phoneNumber,
			std::string darkestSecret
		);
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
};

#endif
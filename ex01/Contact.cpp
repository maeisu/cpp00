#include "Contact.hpp"

Contact::Contact () {
    this->firstName = "";
    this->lastName = "";
    this->nickname = "";
    this->phoneNumber = "";
    this->darkestSecret = "";
}
Contact::~Contact(){};

Contact::Contact ( std::string firstName,
std::string lastName,
std::string nickname,
std::string phoneNumber,
std::string darkestSecret) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;
}
std::string Contact::getFirstName() {
    return this->firstName;
}
std::string Contact::getLastName() {
    return this->lastName;
}
std::string Contact::getNickName() {
    return this->nickname;
}
std::string Contact::getPhoneNumber() {
    return this->phoneNumber;
}
std::string Contact::getDarkestSecret() {
    return this->darkestSecret;
}
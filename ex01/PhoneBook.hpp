#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact data[8];
        int oldIndex;
		std::string displayString(std::string str);
        std::string field(std::string message);
    public:
        PhoneBook();
		~PhoneBook();
        void add();
		void search();
};
#endif
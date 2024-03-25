#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    std::string input;
    PhoneBook phoneBook;
    Contact newContact;
    while (1) {
        std::cout << "Please enter the characters ADD or SEARCH or EXIT" << std::endl;
        std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::exit(0);
		}
        if (input.compare("ADD") == 0) {
            phoneBook.add();
        } else if (input.compare("SEARCH") == 0) {
            phoneBook.search();
        } else if (input.compare("EXIT") == 0) {
            break;
        }
    }
}
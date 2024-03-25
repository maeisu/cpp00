#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->oldIndex = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::field(std::string message) {
    std::string res = "";

    while (res.empty()) {
        std::cout << message << std::endl;
		std::getline(std::cin, res);
		if (std::cin.eof())
			std::exit(0);
    }
    return res;
}

std::string PhoneBook::displayString(std::string str)
{
	std::string res;

	if (str.length() < 10) {
		res = str;
		for (int i = str.length(); i < 10; i++) {
			res += ' ';
		}
	}
	else if (str.length() > 10) {
		res = str.substr(0, 9);
		res += '.';
	}
	else {
		res = str;
	}
	res += '|';
	return (res);
}

void PhoneBook::add()
{
	std::string firstName = field("Please enter your first name");
    std::string lastName = field("Please enter your last name");
    std::string nickName = field("Please enter your nickName");
    std::string phoneNumber = field("Please enter your phone Number");
    std::string darkestSecret = field("Please enter your darkest secret");

    Contact inputData = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	for (int i = 0; i < 8; i++) {
		if (data[i].getFirstName() == "") {
			data[i] = inputData;
			return ;
		}
	}
	data[oldIndex] = inputData;
	oldIndex++;
	oldIndex %= 8;
}

void PhoneBook::search()
{
	Contact data;
    std::string index;
    int size = 0;
    
    for (; size < 8; size++){
        data = this->data[size];
        if (data.getFirstName() == "")
            break;
        if (size == 0) {
            std::cout << "|" + this->displayString("index");
            std::cout << this->displayString("FirstName");
            std::cout << this->displayString("LastName");
            std::cout << this->displayString("NickName") << std::endl;
        }
        std::cout << "|" << size << "         " << "|";
        std::cout << this->displayString(data.getFirstName());
        std::cout << this->displayString(data.getLastName());
        std::cout << this->displayString(data.getNickName()) << std::endl;
    }
	if (size == 0) {
		std::cout << "No data in PhoneBook" << std::endl;
		return;
	}
    std::cout << "Please specify an index." << std::endl;
    std::getline(std::cin, index);
    if (std::cin.eof()) {
        std::exit(0);
    }
    if (index.length() != 1) {
        std::cout << "Input error!" << std::endl;
        return;
    }
    if ('0' <= index[0] && index[0] <= '7' ) {
        int intIndex = index[0] - '0';
        data = this->data[intIndex];
        if (intIndex < size) {
            std::cout << "FirstName:     " << data.getFirstName() << std::endl;
            std::cout << "LastName:      " << data.getLastName() << std::endl;
            std::cout << "NickName:      " << data.getNickName() << std::endl;
            std::cout << "PhoneNumber:   " << data.getPhoneNumber() << std::endl;
            std::cout << "DarkestSecret: " << data.getDarkestSecret() << std::endl;
            return;
        }
    }
    std::cout << "Input error!" << std::endl;
}

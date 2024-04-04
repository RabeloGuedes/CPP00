#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void): index(0), capacity(8) {

}

PhoneBook::~PhoneBook() {

}

Contact	PhoneBook::setContact(void) {
	if (this->index < this->capacity)
		this->index = (this->index + 1) % this->capacity;
	return (this->contacts[this->index]);
}

Contact	PhoneBook::getContact(size_t index) {
	return (this->contacts[index]);
}

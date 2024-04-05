#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void): index(0), capacity(8) {

}

PhoneBook::~PhoneBook() {

}

size_t	PhoneBook::getCapacity(void) {
	return (this->capacity);
}

Contact	&PhoneBook::setContact(void) {
	size_t	index = this->index;
	this->index = (this->index + 1) % this->capacity;
	return (this->contacts[index]);
}

Contact	PhoneBook::getContact(size_t index) {
	return (this->contacts[index]);
}

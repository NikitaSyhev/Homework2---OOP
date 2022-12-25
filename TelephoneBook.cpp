#include "TelephoneBook.h"
#include <string>





TelephoneBook::TelephoneBook(const std::string& user, int homePhone, int mobilePhone, const std::string& extra) : _user("Noname"), _homePhone(000), _mobilePhone(000), _extra("Nothing") {}


std::string TelephoneBook::getUser() {
	return _user;
}
std::string TelephoneBook::getExtra()
{
	return _extra;
}
void TelephoneBook::setExtra(std::string& extra)
{
	_extra = extra;
}
void TelephoneBook::setUser(std::string& user)
{
	_user = user;
}
int TelephoneBook::gethomePhone()
{
	return _homePhone;
}
void TelephoneBook::sethomePhone(int homePhone)
{
	_homePhone = homePhone;
}

int TelephoneBook::getmobilePhone()
{
	return _mobilePhone;
}

void TelephoneBook::setmobilePhone(int mobilePhone)
{
	_mobilePhone = mobilePhone;
}

void add_abonent(TelephoneBook arr[], const int length) {

}



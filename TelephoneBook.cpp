#include "TelephoneBook.h"
#include <string>


TelephoneBook::TelephoneBook(std::string& user, int homePhone, int mobilePhone, std::string& extra) : _user("Noname"), _homePhone(83519000000), _mobilePhone(8999000000), _extra("This is a test user") {}


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



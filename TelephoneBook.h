#pragma once
#include <string>
class TelephoneBook
{
public:
	TelephoneBook();
	TelephoneBook(const std::string& user, int homePhone, int mobilePhone, const std::string& extra);

	std::string getUser();    //геттеры и сеттеры для user
	void setUser(std::string& user);

	int gethomePhone();
	void sethomePhone(int homePhone);


	int getmobilePhone();
	void setmobilePhone(int mobilePhone);

	std::string getExtra();   
	void setExtra(std::string& extra);


	






private:
	std::string _user;
	int	_homePhone;
	int _mobilePhone;
	std::string _extra;

};

void add_abonent(TelephoneBook arr[], const int length);

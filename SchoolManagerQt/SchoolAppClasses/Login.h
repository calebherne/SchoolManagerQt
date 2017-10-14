//#ifndef _LOGIN_H
//#define _LOGIN_H

#pragma once
#include <string>

class Login
{
public:
	Login();
	~Login();
private:
	enum AccessLevel {Student, Teacher, Admin};

	std::string userName;
	std::string Password;
	AccessLevel accessLevel;
};

//#endif

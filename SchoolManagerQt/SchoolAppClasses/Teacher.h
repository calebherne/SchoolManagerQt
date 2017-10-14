//#ifndef _TEACHER_H
//#define _TEACHER_H

#pragma once
#include <string>
#include "Clas.h"
#include "Login.h"

class Teacher
{
public:
	Teacher();
	~Teacher();
protected:
	int teacherId;
	std::string name;
	time_t startDate;
	std::vector<Clas> classes;
	std::string department;
	Login login;
};

//#endif


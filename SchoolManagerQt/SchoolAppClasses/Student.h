//#ifndef _STUDENT_H
//#define _STUDENT_H

#pragma once
#include <string>
#include <vector>
#include "Clas.h"
#include "Login.h"

//C:\Users\caleb\Documents\FALL17\Software Design\SchoolAppClasses

class Student
{
public:
	Student();
	~Student();
protected:
	int studentID;
	std::string name;
	std::vector <Clas> classes;
	int credits;
	time_t startDate;
	std::string major;
	Login login;
};

//#endif


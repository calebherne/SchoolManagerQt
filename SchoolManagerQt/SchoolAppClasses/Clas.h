//#ifndef _CLAS_H
//#define _CLAS_H

#pragma once
#include <string>
#include <vector>
#include <ctime>
#include "Assignment.h"
#include "Syllabus.h"
#include "Student.h"
#include "Teacher.h"
#include "Quiz.h"

class Clas
{
public:
	Clas();
	~Clas();

protected:
	int classID;
	std::string name;
	Syllabus syallabus;
	std::vector<Assignment> assignments;
	std::vector<Quiz> quizes;
	std::vector<Student> students;
	Teacher teacher;
	time_t startDate;
	time_t meetingTime;
	int credits;
};

//#endif


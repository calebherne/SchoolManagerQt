//#ifndef _ASSIGNMENT_H
//#define _ASSIGNMENT_H

#pragma once
#include <string>
#include <vector>

class Assignment
{
public:
	Assignment();
	~Assignment();

protected:
	int assignmentID;
	std::string name;
	std::string description;
	time_t dueDate;
	int points;
};

//#endif


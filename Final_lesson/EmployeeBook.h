#pragma once

#include <vector>

#include "Employee.h"

class EmployeeBook
{
	std::vector<Employee*> book_;

public:

	~EmployeeBook();

	void AddEmployee(const std::string& fio, const std::string& department, float salary, int id);

	void PrintBook();


};

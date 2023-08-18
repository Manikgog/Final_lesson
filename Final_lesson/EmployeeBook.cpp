#include <string>
#include <vector>

#include "EmployeeBook.h"
#include "Employee.h"

void EmployeeBook::AddEmployee(const std::string& fio, const std::string& department, float salary)
{
	book_.push_back(new Employee(fio, department, salary));
}


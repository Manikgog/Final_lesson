#include <string>
#include <vector>

#include "EmployeeBook.h"
#include "Employee.h"

void EmployeeBook::AddEmployee(const std::string& fio, const std::string& department, float salary, int id)
{
	book_.push_back(new Employee(fio, department, salary, id));
}

void EmployeeBook::PrintBook()
{
	for (const auto& emp : book_)
	{
		emp->PrintEmployee();
		std::cout << std::endl;
	}
}

EmployeeBook::~EmployeeBook()
{
	for (auto& emp : book_)
	{
		delete emp;
	}
}

#include "Employee.h"

void Employee::PrintEmployee()
{
	std::cout << "Name: " << FIO_ 
		<< "\nDepartment: " << department_ 
		<< "\nSalary: " << salary_ 
		<< "\nid: " << id_;
	return;
}


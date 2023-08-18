#pragma once
#include <string>


class Employee
{
	std::string FIO_;
	std::string department_;
	float salary_;

public:
	Employee() : FIO_(""), department_(""), salary_(0.0f) {}
	Employee(const std::string& fio, const std::string& department, float salary) 
		: FIO_(fio), department_(department), salary_(salary) {}
	
	std::string GetFIO()
	{
		return FIO_;
	}
	
	std::string GetDepartment()
	{
		return department_;
	}
	
	float GetSalary()
	{
		return salary_;
	}

	void SetFIO(const std::string& fio)
	{
		FIO_ = fio;
	}

	void SetDepartment(const std::string& department)
	{
		department_ = department;
	}

	void SetSalary(float salary)
	{
		salary_ = salary;
	}

};

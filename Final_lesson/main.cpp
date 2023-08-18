#include <iostream>
#include <exception>
#include <string>

#include <format>

#include "Employee.h"
#include "EmployeeBook.h"

void F00(int a)
{
    if (a < 0)
    {
        throw std::range_error("\"a\" was less then 0");
    }

    int* p = new int[a];
        
    throw std::exception(
        (std::string("message") + std::to_string(a)).c_str()
    );

    delete[] p;
}

int NoexeptSumm(int a, int b) noexcept
{
    throw 1;
    return a + b;
}

int ExeptDivide(int a, int b)
{
    if (!b)
    {
        throw 1;
    }
    return a / b;
}

int main()
{
      
    /*EmployeeBook eb;
    eb.AddEmployee("Fibi", "central perk", 20.5, 1);
    eb.AddEmployee("Joe", "central perk", 10.5, 2);
    eb.AddEmployee("Chendler", "central perk", 25.5, 3);
    eb.AddEmployee("Monica", "central perk", 30.5, 4);
    eb.AddEmployee("Ross", "central perk", 21.5, 5);

    eb.PrintBook();*/


    try
    {
        /*std::cout << ExeptDivide(6, 2) << std::endl;
        std::cout << ExeptDivide(1, 0) << std::endl;*/
        F00(-1);
    }
    catch (int &val)
    {
        std::cerr << "Something wrong with error code " << val << std::endl;
    }
    catch (std::range_error& ex)
    {
        std::cerr << ex.what();
    }
    catch (std::exception& ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch(...)
    {
        std::cerr << "Something wrong";
    }
    
    
    
    return 0;
}

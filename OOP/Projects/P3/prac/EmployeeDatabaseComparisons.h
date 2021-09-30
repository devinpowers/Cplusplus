
#ifndef EMPLOYEEDATABASECOMPARISONS_H
#define EMPLOYEEDATABASECOMPARISONS_H


class EmployeeDatabaseComparisons{

    virtual unsigned int getSize() const = 0;

    virtual bool compare_first_name(int, int) const = 0;

    virtual bool compare_last_name(int, int) const = 0;

    virtual bool compare_salary(int, int) const = 0;

    virtual bool compare_hire_year(int, int) const = 0;

};

#endif



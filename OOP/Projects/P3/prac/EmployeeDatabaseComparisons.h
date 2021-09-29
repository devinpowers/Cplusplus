
#ifndef EMPLOYEEDATABASECOMPARISONS_H
#define EMPLOYEEDATABASECOMPARISONS_H


class EmployeeDatabaseComparisons{

    virtual unsigned int getSize() const = 0;
    virtual bool compareFN(int, int) const = 0;
    virtual bool compareLN(int, int) const = 0;
    virtual bool compareSalary(int, int) const = 0;
    virtual bool compareYR(int, int) const = 0;

};

#endif
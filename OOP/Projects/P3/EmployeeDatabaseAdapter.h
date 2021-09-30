pr
#ifndef EMPLOYEEDATABASEADAPTER_H
#define EMPLOYEEDATABASEADAPTER_H

#include "EmployeeDatabase.h"

class EmployeeDatabaseComparisons{

    virtual unsigned int getSize() const = 0;
    virtual bool compareFN(int, int) const = 0;
    virtual bool compareLN(int, int) const = 0;
    virtual bool compareSalary(int, int) const = 0;
    virtual bool compareYR(int, int) const = 0;

};

class EmployeeDatabaseAdapter : public EmployeeDatabase, public EmployeeDatabaseComparisons {

    public:

        EmployeeDatabaseAdapter(){}
        
        EmployeeDatabaseAdapter(const vector<Employee*>& g){
            
            database = g;
        }
        
        virtual unsigned int getSize() const {

            return database.size();
        }
        
        virtual bool compareFN(int i, int j) const {

            return database[i]->getFName() > database[j]->getFName();

        }
        
        virtual bool compareLN(int i, int j) const {

            return database[i]->getLName() > database[j]->getLName();

        }
        
        virtual bool compareSalary(int i, int j) const {

            return database[i]->getSalary() > database[j]->getSalary();

        }
        
        virtual bool compareYR(int i, int j) const {

            return database[i]->getHireYear() > database[j]->getHireYear();

        }
};

#endif /* EMPLOYEEDATABASEADAPTER_H */





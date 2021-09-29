
#ifndef EMPLOYEEDATABASEADAPTER_H
#define EMPLOYEEDATABASEADAPTER_H

#include "EmployeeDatabase.h"
#include "EmployeeDatabaseComparisons.h"

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





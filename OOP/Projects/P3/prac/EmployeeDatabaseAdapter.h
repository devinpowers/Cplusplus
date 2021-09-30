
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
        
        virtual bool compare_first_name(int i, int j) const {

            return database[i]->get_First_Name() > database[j]->get_First_Name();

        }
        
        virtual bool compare_last_name(int i, int j) const {

            return database[i]->get_Last_Name() > database[j]->get_Last_Name();

        }
        
        virtual bool compare_salary(int i, int j) const {

            return database[i]->get_Salary() > database[j]->get_Salary();

        }
        
        virtual bool compare_hire_year(int i, int j) const {

            return database[i]->getHireYear() > database[j]->getHireYear();

        }
};

#endif /* EMPLOYEEDATABASEADAPTER_H */






#ifndef EMPLOYEEDATABASE_H
#define EMPLOYEEDATABASE_H

#include "Employee.h"
#include "Manager.h"

#include <string>
using std::string;

#include <algorithm>
#include "SortableVector.h"


class EmployeeDatabase : public SortableVector{ 

    protected:
    
        string name;                    // Name of the DataBase
        vector<Employee*> database;     // the actual vector of employees in the Database

    public:
        EmployeeDatabase(){} // Constructor

        EmployeeDatabase(const vector<Employee*>& g)    // Constructor if a database is initiated with a vector of employees
        { 
            database = g;
        }

        virtual ~EmployeeDatabase(){
            // Virtual Deconstructor to destroy the database
            for(int i = 0; i < database.size(); i++){
                delete database[i];
            }
        }

        virtual unsigned int getSize() const { return database.size(); } // Returns size of Database(aka size of the vector)

        virtual bool smaller(int i, int j) const{ return database[i] > database[j]; } // compares the size of two databases (const so nothing is changed in the database with this method)

        virtual void swap(int i, int j){

            // Swapping the contents of data
            Employee* temp = database[i];
            database[i] = database[j];
            database[j] = temp;
        }

        void AddRecord(Employee *newAdd){  database.push_back(newAdd); }
        
        Employee* getRecord(int i)
        { 
            return database[i]; // Return Employee at certain index
        }

        void DisplayRecords(){
            // Prints vector database
            for(int i = 0; i < database.size(); i++){
                database[i]->DisplayEmployee();
            }
        }
};

#endif /* EMPLOYEEDATABASE_H */


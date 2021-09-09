

#ifndef DATABASE_H
#define DATABASE_H

#include "Employee.h"
#include "Manager.h"
#include <string>

using std::string;

class Database {

    protected:

        vector<Employee*> database;
    
    public:

        Database() = default;

        Database(vector<Employee*> g){
            database = g;
        }

        void AddRecord(Employee *newAdd){
            // add to vector
            database.push_back(newAdd);
        }

        void DisplayRecord(){
            //printing out records

            for (int i = 0; i < database.size(); i++ ){
                database[i]->DisplayEmployee();
            }
        }
};
#endif /* DATABASE_H */


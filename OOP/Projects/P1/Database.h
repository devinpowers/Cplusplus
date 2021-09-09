

#ifndef DATABASE_H
#define DATABASE_H

#include "Employee.h"
#include "Manager.h"
#include <string>

using std::string;

class CDatabase {

    protected:
        vector<CEmployee*> database; // Contains database of pointers to Employee Class

    public:
            CDatabase() = default; // Default constructor
            
            CDatabase(vector<CEmployee*> g){
                database = g;
            }

            void AddRecord(CEmployee *newAdd){
                // Add to Vector
                database.push_back(newAdd);
            }
            
            void DisplayRecords(){
                // Printing out Records
                for(int i = 0; i<database.size();i++){
                    database[i]->DisplayEmployee();
                }
            }
};

#endif /* DATABASE_H */


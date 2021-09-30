

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortableVector.h"
#include "EmployeeDatabaseAdapter.h"

class BubbleSortInterface{

    public:
        // Method for Sorting Datbase
        void Sort(EmployeeDatabaseAdapter* empDatabase){
            bool sorted = false;
            int n = empDatabase->getSize();
            while(!sorted){
                sorted = true;
                
                for(int i = 1; i < n; i++){
                    if(compare(empDatabase, i, i-1)){
                        empDatabase->swap(i-1, i);
                        sorted = false;
                    }
                }
                n--;
            }
        }

    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const = 0;

};

// Implementing Sorting algorithms based on the BubbleSort interface Above!!!!!
//  

class BubbleSortFN : public BubbleSortInterface{

    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
            return !empDatabase->compareFN(i, j);
        }
        
};

class BubbleSortFNReverse : public BubbleSortInterface{
    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
            return empDatabase->compareFN(i, j);
        }
};   

class BubbleSortLN : public BubbleSortInterface{
    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
            return !empDatabase->compareLN(i, j);
        }
};


class BubbleSortLNReverse : public BubbleSortInterface{
    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
            return empDatabase->compareLN(i, j);
        }
};

class BubbleSortSalary : public BubbleSortInterface{
    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
            return !empDatabase->compareSalary(i, j);
        }
};

class BubbleSortSalaryReverse : public BubbleSortInterface{
    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
            return empDatabase->compareSalary(i, j);
        }
};

class BubbleSortYear : public BubbleSortInterface{
    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
            return !empDatabase->compareYR(i, j);
        }
};


class BubbleSortYearReverse : public BubbleSortInterface{
    protected:
        virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
            return empDatabase->compareYR(i, j);
        }
};
#endif /* BUBBLESORT_H */


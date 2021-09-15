#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "SortableVector.h"

class BubbleSort{
public:
    void sortDecreasing(SortableVector* sortableVector){
        bool sorted = false;
        int n=sortableVector->getSize();
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(sortableVector->smaller(i-1,i)){
                    sortableVector->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    void sortIncreasing(SortableVector* sortableVector){
        bool sorted = false;
        int n=sortableVector->getSize();
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(!sortableVector->smaller(i-1,i)){
                    sortableVector->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
};
#endif /* BUBBLESORT_H */


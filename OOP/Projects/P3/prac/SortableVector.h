

#ifndef SORTTABLEVECTOR_H
#define SORTTABLEVECTOR_H

#include <cstdlib>
#include <vector>

class SortableVector{
    public:
        // Pure Virtual Function
        virtual unsigned int getSize() const=0;
        virtual bool smaller(int i, int j) const=0;
        virtual void swap(int i, int j) =0;
        
        virtual ~SortableVector(){}
};

#endif /* SORTTABLEVECTOR_H */


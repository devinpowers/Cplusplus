#ifndef FILE_H
#define FILE_H
#include "Entity.h"
#include <iostream>

class File: public Entity{
public:
    File(string name, unsigned int size):Entity(name,size){}
    virtual void print() const{
        cout<<"(file name="<<m_name<<", file size="<<m_size<<"); ";
    }
    virtual ~File(){}
};

#endif /* FILE_H */


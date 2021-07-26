#ifndef DIRECTORY_H
#define DIRECTORY_H
#include "Entity.h"
#include <vector>
#include <iostream>
#include <algorithm>

class Directory: public Entity{
protected:
    vector<Entity*> entries;
public:
    Directory(string name):Entity(name,0){}
    
    virtual ~Directory(){
        for(int i=0; i<entries.size(); i++) delete entries[i];
    }

    virtual void addEntity(Entity* entry){
        entries.push_back(entry);
        m_size += entry->getSize();
    }
    
    virtual void removeEntity(Entity* entry){
        remove(entries.begin(), entries.end(), entry);
        m_size -= entry->getSize();
    }
    
    virtual Entity* getChild(int i) const{
        return entries[i];
    }
    
    virtual unsigned int getChildrenSize() const{
        return entries.size();
    }
    
    virtual void print() const{
        cout<<"Directory "<<m_name<<" contains: (";
        for(int i=0; i<entries.size(); i++){
            entries[i]->print();
        }
        cout<<"); ";
    }
};
#endif /* DIRECTORY_H */
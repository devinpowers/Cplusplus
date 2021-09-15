/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortableVector.h
 * Author: alexliu
 *
 * Created on January 26, 2016, 5:56 PM
 */

#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

class SortableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual void swap(int i, int j) = 0;
};

#endif /* SORTABLEVECTOR_H */


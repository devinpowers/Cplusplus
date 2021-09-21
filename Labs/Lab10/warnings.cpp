#include <iostream>
using std::cout; using std::endl;

#include "table.h"

// Constructor
Table::Table(long width, long height, long val=0)
{
    w = width;
    h = height;
    l = val;
}

void fill_random(long lo, long hi, unsigned int seed=0);




void print_table()
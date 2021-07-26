#include <cstdlib>
using namespace std;
#include "File.h"
#include "Directory.h"
#include <iostream>

int main(int argc, char** argv) {
    Directory* d1 = new Directory("d1");
    d1->addEntity(new File("f1.txt", 100));
    d1->addEntity(new File("f2.txt", 80));
  
    Directory* d2= new Directory("d2");
    d2->addEntity(new File("f3.txt", 20));
    d2->addEntity(new File("f4.txt", 30));
    d2->addEntity(new File("f5.txt", 40));
    
    Directory* d3= new Directory("d3");
    d3->addEntity(d1);
    d3->addEntity(d2);
    
    d3->print();
    cout<<d3->getSize();
    
    return 0;
}


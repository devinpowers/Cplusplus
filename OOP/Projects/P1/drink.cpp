
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;

#include "drink.h"

Drink::Drink(string theName, int theSize){
    // Constructor
    std::cout << "USING DEFAULT CONSTRUCTOR  " << endl;
    user = theName;
    size = theSize;
}

Drink::Drink(const Drink & drink){
    std::cout << "Using Copy Constructor******************************************" << std::endl;
    // Copy Constructor
	size=drink.get_size();
	user=drink.get_user();
}

Drink::~Drink(){}

string Drink::sizestr(){
    if(size==1){
        return "small";
    }
    if(size==2){
        return "medium";
    }
    else{
        return "large";
    }
}

Drink& Drink::operator=(const Drink &drink)  // Overloaded Operator  
    {
        std::cout << "Using Operator Overload " << std::endl;
        if(this != &drink){
            user = drink.get_user();
            size = drink.get_size();      
        }
        return *this;
    }


// Getters

string Drink::get_user() const{
    return user;
}

int Drink::get_size()const{
    return size;
}



void Drink::confirmOrder(){
    std::cout << user << " ordered a " << sizestr() << " drink of";
}

// BubbleTea Constructors
BubbleTea::BubbleTea(string theUser, int theSize, bool thetemp, int theopp) : Drink(theUser, theSize)
{
    temp = thetemp; // Set Temp and OPP
    opp = theopp;

}

BubbleTea::BubbleTea(const BubbleTea& bubTea):Drink(bubTea){
    std::cout << "I am using tis" << std::endl;
	opp = bubTea.opp;
	temp= bubTea.temp;
}

// BubbleTea Deconsructor
BubbleTea::~BubbleTea(){}

/*
BubbleTea& BubbleTea::operator=(const  BubbleTea& bubTea){
    std::cout << "Using Overloaded Operator " << std::endl;
	if (this != &bubTea){
			opp = bubTea.opp;
			temp = bubTea.temp;
	}
	return *this; // return pointer to this object
}

*/





string BubbleTea::sizes(){
    if(opp==1){
        return "small bubbles";
    }
    if(opp==2){
        return "medium bubbles";
    }
    else{
        return "large bubbles";
    }
}
void BubbleTea::confirmOrder(){
    Drink::confirmOrder();
    std::cout << " bubble tea with " << sizes()<<endl;
}

// OrangeJuice Constuctors

OrangeJuice::OrangeJuice(string theUser, int theSize, bool thepulp) : Drink(theUser, theSize)
{
    pulp = thepulp;
}


OrangeJuice::OrangeJuice(const OrangeJuice& oj):Drink(oj){
	pulp=oj.pulp;
}

// OJ Deconstructors
OrangeJuice::~OrangeJuice(){}

// OJ Operator Overloaded
OrangeJuice& OrangeJuice::operator=(const OrangeJuice& oj){
	if(this != &oj){
		pulp = oj.pulp;
		Drink::operator=(oj);
	}
	return *this;
}

string OrangeJuice::pulpstr(){
    if(pulp==true){
        return "pulp";
    }
    else{
        return "no pulp";
    }
}


void OrangeJuice::confirmOrder(){
    Drink::confirmOrder();
    std::cout << " orange juice with " << pulpstr()<<endl;
}

// Lists !!

// OrangeJuice Order List

OrangeJuiceOrderList::OrangeJuiceOrderList(vector<OrangeJuice*>& ojList){
	orangeJuiceDrinks=ojList; // Set list equal
}

OrangeJuiceOrderList::OrangeJuiceOrderList(const OrangeJuiceOrderList& ojOrderList){
	orangeJuiceDrinks = ojOrderList.orangeJuiceDrinks;	
}

OrangeJuiceOrderList::~OrangeJuiceOrderList(){}

OrangeJuiceOrderList& OrangeJuiceOrderList::operator=(const OrangeJuiceOrderList& ojOrderList){
	if (this != &ojOrderList){
		orangeJuiceDrinks=ojOrderList.orangeJuiceDrinks;
	}
	return *this;
}


void OrangeJuiceOrderList::toDrinkVector(vector<Drink*> & tempDrink){

	for(unsigned int i=0;i<orangeJuiceDrinks.size();i++){
        // Add Drink 
		tempDrink.push_back(orangeJuiceDrinks[i]);
	}
}

// BubbleTea List

BubbleTeaList::BubbleTeaList(vector<BubbleTea*>& bubList){
	bubbleTeaDrinks=bubList;
}
BubbleTeaList::BubbleTeaList(const BubbleTeaList& bubOrderList){
	bubbleTeaDrinks=bubOrderList.bubbleTeaDrinks;	
}

BubbleTeaList::~BubbleTeaList(){}

BubbleTeaList& BubbleTeaList::operator=(const BubbleTeaList& bubOrderList){
	if (this != &bubOrderList){
		bubbleTeaDrinks=bubOrderList.bubbleTeaDrinks;
	}
	return *this;
}

void BubbleTeaList::toDrinkVector(vector<Drink*> &tempDrink){
	//vector<Drink*> tempDrink;

	for(unsigned int i=0;i<bubbleTeaDrinks.size();i++){
		tempDrink.push_back(bubbleTeaDrinks[i]);
	}
}





#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;

#include "drink.h"

Drink::Drink(string theName, int theSize){

    user = theName;
    size = theSize;
}

Drink::Drink(const Drink & drink){

    // Getters
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

string Drink::get_user() const{
    // Getters
    return user;
}

int Drink::get_size()const{
    return size;
}



void Drink::confirmOrder(){
    std::cout << user << " ordered a " << sizestr() << " drink of";
}

BubbleTea::BubbleTea(string theUser, int theSize, bool thetemp, int theopp) : Drink(theUser, theSize)
{
    temp = thetemp;
    opp = theopp;

}
BubbleTea::BubbleTea(const BubbleTea& bubTea):Drink(bubTea){
	opp = bubTea.opp;
	temp= bubTea.temp;
}
BubbleTea::~BubbleTea(){}
BubbleTea& BubbleTea::operator=(const  BubbleTea& bubTea){
	if (this != &bubTea){
			opp = bubTea.opp;
			temp = bubTea.temp;
	}
	return *this;
}

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
OrangeJuice::OrangeJuice(string theUser, int theSize, bool thepulp)
: Drink(theUser, theSize) {
    pulp = thepulp;
}
OrangeJuice::OrangeJuice(const OrangeJuice& oj):Drink(oj){
	pulp=oj.pulp;
}

OrangeJuice::~OrangeJuice(){}

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

OrangeJuiceOrderList::OrangeJuiceOrderList(vector<OrangeJuice*>& ojList){
	orangeJuiceDrinks=ojList;
}

OrangeJuiceOrderList::OrangeJuiceOrderList(const OrangeJuiceOrderList& ojOrderList){
	orangeJuiceDrinks=ojOrderList.orangeJuiceDrinks;	
}

OrangeJuiceOrderList::~OrangeJuiceOrderList(){}

OrangeJuiceOrderList& OrangeJuiceOrderList::operator=(const OrangeJuiceOrderList& ojOrderList){
	if (this != &ojOrderList){
		orangeJuiceDrinks=ojOrderList.orangeJuiceDrinks;
	}
	return *this;
}

void OrangeJuiceOrderList::toDrinkVector(vector<Drink*> & tempDrink){
	//vector<Drink*> tempDrink;

	for(unsigned int i=0;i<orangeJuiceDrinks.size();i++){
		tempDrink.push_back(orangeJuiceDrinks[i]);
	}
}


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




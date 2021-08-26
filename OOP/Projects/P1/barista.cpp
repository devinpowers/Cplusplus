

#include "barista.h"

Barista::Barista(){}
Barista::Barista(const Barista& barista){}
Barista& Barista::operator=(const Barista& barista){ return *this;}
Barista::~Barista(){}

void Barista::print(vector<Drink*>& Drinks){
    vector<Drink*> tempDrinks;
    string sortBy;


    for(unsigned int i=0;i<Drinks.size();i++)
    {
        if(tempDrinks.size() ==0)
        {
            sortBy = getSortBy(*Drinks[i]);
            tempDrinks.push_back(Drinks[i]);
        }
        else
        {
            if (sortBy == getSortBy(*Drinks[i])){

                tempDrinks.push_back(Drinks[i]);
            }
            else{
				printCall(tempDrinks.size(),sortBy);
                for(unsigned t=0;t<tempDrinks.size();t++){
                    tempDrinks[t]->confirmOrder();
                }
                cout <<  endl;
                sortBy= getSortBy(*Drinks[i]);
                tempDrinks.clear();
                tempDrinks.push_back(Drinks[i]);
            }
        }

    }
	printCall(tempDrinks.size(),sortBy);
    for(unsigned t=0;t<tempDrinks.size();t++){
    	tempDrinks[t]->confirmOrder();
    }
    cout <<  endl;
    tempDrinks.clear();
	
}

CoolBarista::CoolBarista(){}
CoolBarista::CoolBarista(const CoolBarista& barista){}
CoolBarista& CoolBarista::operator=(const CoolBarista& barista){return *this;}
CoolBarista::~CoolBarista(){}

void CoolBarista::deliverDrinks(OrangeJuiceOrderList *ojList){
	vector<Drink*> tempDrinks;
	ojList->toDrinkVector(tempDrinks);
	sortDrinks(tempDrinks);

}

void CoolBarista::deliverDrinks(BubbleTeaList *bubList){
	vector<Drink*> tempDrinks;
	bubList->toDrinkVector(tempDrinks);
	sortDrinks(tempDrinks);

}

void CoolBarista::sortDrinks(vector<Drink*>& drinks){
	unsigned int x,y;
	Drink temp;
	for(x=1; x<drinks.size(); x++){
		y=x;
		while(y>0 && drinks[y-1]->get_user()>drinks[y]->get_user()){
			std::swap(drinks[y-1],drinks[y]);
			y--;
		}
	}
	cout<<"Cool Sort"<<endl;
	print(drinks);
}
string CoolBarista::getSortBy(Drink& drink){
	return drink.get_user();
}

void CoolBarista::printCall(int size,string sortBy){
	cout << "I have "<<size << " drinks for "<<	sortBy<<endl;
}

NewbieBarista::NewbieBarista(){}
NewbieBarista::NewbieBarista(const NewbieBarista& barista){}
NewbieBarista& NewbieBarista::operator=(const NewbieBarista& barista){return *this;}
NewbieBarista::~NewbieBarista(){}

void NewbieBarista::deliverDrinks(OrangeJuiceOrderList *ojList){
	vector<Drink*> tempDrinks;
	ojList->toDrinkVector(tempDrinks);
	sortDrinks(tempDrinks);
}

void NewbieBarista::deliverDrinks(BubbleTeaList *bubList){
	vector<Drink*> tempDrinks;
	bubList->toDrinkVector(tempDrinks);
	sortDrinks(tempDrinks);
}

void NewbieBarista::sortDrinks(vector<Drink*>& drinks){
	unsigned int x,y;
	Drink temp;
	for(x=1; x<drinks.size(); x++){
		y=x;
		while(y>0 && drinks[y-1]->get_size()>drinks[y]->get_size()){
			std::swap(drinks[y-1],drinks[y]);
			y--;
		}
	}
	cout<<"Newbie Sort"<<endl;
	print(drinks);
}

string NewbieBarista::getSortBy(Drink& drink){
	return drink.sizestr();
}

void NewbieBarista::printCall(int size,string sortBy){
	cout << "I have "<<size << " of size "<<sortBy<<endl;
}





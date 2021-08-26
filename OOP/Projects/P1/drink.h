
#ifndef DRINK_H
#define	DRINK_H
#include<iostream>
#include<string>
#include<vector>


using std::cout; using std::endl; using std::cin;
using std::string;
using std::vector;
using std::ostream;



class Drink{

	private:
		string user;
		int size;
	public:
		Drink(){}
		Drink(string theName, int theSize);
		Drink(const Drink & drink); 			// ????????????????????????????????????? refering to this drinks

		virtual ~Drink();				// Deconstructor
		virtual void confirmOrder();	// Have to implement  
		string sizestr();				

		string  get_user()const;
		int  get_size()const;
		
		
		Drink& operator=(const Drink &drink)
		{
			// Overloaded Operator =

			if(this != &drink){
				user = drink.get_user();
				size = drink.get_size();      
			}
			return *this;
		}
    
};

// Drinks 


class BubbleTea: public Drink{
	// Inherits from Drink!!!
	private:
		bool temp;
		int opp;
	public:

	
		// Constructors
		BubbleTea();
		BubbleTea(string theUser, int theSize, bool thetemp, int theopp);   
		BubbleTea(const BubbleTea& bubTea);
		BubbleTea& operator = (const BubbleTea & bubTea);

		//Deconstructor
		virtual ~BubbleTea();


		void confirmOrder();
		string sizes();
};


class OrangeJuice: public Drink{
	private:
		bool pulp; 
	public:
		OrangeJuice();
		OrangeJuice(string theUser, int theSize, bool thepulp);
		OrangeJuice(const OrangeJuice& oj);
		~OrangeJuice();
		OrangeJuice& operator=(const OrangeJuice& oj);
		void confirmOrder();
		string pulpstr();
    
};


class OrangeJuiceOrderList{

	private:
		vector<OrangeJuice*> orangeJuiceDrinks;


	public:
		// Constructors
		OrangeJuiceOrderList(vector<OrangeJuice*>& ojList);
		OrangeJuiceOrderList(const OrangeJuiceOrderList& ojOrderList);
		~OrangeJuiceOrderList();

		//overloaded
		OrangeJuiceOrderList & operator=(const OrangeJuiceOrderList& ojOrderList);

		// Function that holds our drinks (regardless if its OJ or BubbleTea)
		void toDrinkVector(vector<Drink*> &);
	
	};

class BubbleTeaList{

	private:
		vector<BubbleTea*> bubbleTeaDrinks;

	public:

		BubbleTeaList(vector<BubbleTea*> & bubList);
		BubbleTeaList(const BubbleTeaList& bubTeaList);
		~BubbleTeaList();
		BubbleTeaList & operator=(const BubbleTeaList& bubTeaList);

		// Function that holds our drinks (regardless if its OJ or BubbleTea)
		void toDrinkVector(vector<Drink*> & );
	
	};

#endif	/* DRINK_H */


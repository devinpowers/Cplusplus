
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
		Drink(){}								 // Constructor
		Drink(string theName, int theSize);		 // Constructor
		Drink(const Drink & drink); 			// Copy Constructor
		virtual ~Drink();				// Deconstructor

		// Functions/Methods
		virtual void confirmOrder();	
		string sizestr();				

		string  get_user()const;
		int  get_size()const;
		
		
		Drink& operator=(const Drink &drink);
		
		  // Overloaded Operator  
		  // = 
		{
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

		BubbleTea();														// Constructor
		BubbleTea(string theUser, int theSize, bool thetemp, int theopp);   // Constructor
		BubbleTea(const BubbleTea& bubTea);									// Copy Constructor
		BubbleTea& operator = (const BubbleTea & bubTea);					// Operator Overloaded
		virtual ~BubbleTea();												// Deconstructor

		void confirmOrder();
		string sizes();
};


class OrangeJuice: public Drink{
	private:
		bool pulp; 
	public:
		OrangeJuice();													// Constructor
		OrangeJuice(string theUser, int theSize, bool thepulp);		  // Constructor
		OrangeJuice(const OrangeJuice& oj);								// Copy Constructor
		~OrangeJuice();													// Deconstructor
		OrangeJuice& operator=(const OrangeJuice& oj);					//  Operator Overloaded

		// Functions/Methods

		void confirmOrder();
		string pulpstr();
    
};

// Lists


class OrangeJuiceOrderList{

	private:
		vector<OrangeJuice*> orangeJuiceDrinks;										// Vector of OrangeJuice Drinks

	public:
		OrangeJuiceOrderList(vector<OrangeJuice*>& ojList); 						//  Constructors

		OrangeJuiceOrderList(const OrangeJuiceOrderList& ojOrderList);      		// Copy Constructors
		
		~OrangeJuiceOrderList();													// DeConstructor

		OrangeJuiceOrderList & operator=(const OrangeJuiceOrderList& ojOrderList); // Operator overloaded

		// Function that holds our drinks (regardless if its OJ or BubbleTea)
		void toDrinkVector(vector<Drink*> &);
	
	};

class BubbleTeaList{

	private:
		vector<BubbleTea*> bubbleTeaDrinks; // Vector of BubbleTea Drinks

	public:

		BubbleTeaList(vector<BubbleTea*> & bubList);
		BubbleTeaList(const BubbleTeaList& bubTeaList);
		~BubbleTeaList();
		 BubbleTeaList & operator=(const BubbleTeaList& bubTeaList); 

		// Function that holds our drinks (regardless if its OJ or BubbleTea)
		void toDrinkVector(vector<Drink*> & );
	
	};

#endif	/* DRINK_H */


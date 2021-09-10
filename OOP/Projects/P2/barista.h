
#include "drink.h"

class Barista{


	protected:
		virtual void print(vector<Drink*>&);
		virtual string getSortBy(Drink&)=0;
		virtual void printCall(int,string)=0;     // Pure Virtual Function


	public:
		Barista();					// Constructor
		Barista(const Barista&);   // Copy Constructor

		virtual ~Barista();			// Deconstructor

		Barista& operator=(const Barista&); // Operator Overloaded

		virtual void deliverDrinks(OrangeJuiceOrderList*)=0;
		virtual void deliverDrinks(BubbleTeaList*)=0;
		virtual void sortDrinks(vector<Drink*>&)=0;

	

};

class CoolBarista: public Barista{
			
	protected:
		virtual void printCall(int,string);

	public:
		CoolBarista();									// Constructor
		CoolBarista(const CoolBarista&);  				// Copy Constructor
		~CoolBarista();									// Deconstructor

		CoolBarista& operator=(const CoolBarista&);		// Operator Overloaded

		// Methods
		virtual void deliverDrinks(OrangeJuiceOrderList*);
		virtual void deliverDrinks(BubbleTeaList*);
		virtual void sortDrinks(vector<Drink*>&);
		virtual string getSortBy(Drink&);

};

class NewbieBarista: public Barista{

	protected:

	virtual void printCall(int,string);
	
	public:
		NewbieBarista();								// Constructor
		NewbieBarista(const NewbieBarista&);           // Copy Constructor

		~NewbieBarista();								// Deconstructor

		NewbieBarista& operator=(const NewbieBarista&);  // Operator Overload


		virtual void deliverDrinks(OrangeJuiceOrderList*);
		virtual void deliverDrinks(BubbleTeaList*);
		virtual void sortDrinks(vector<Drink*>&);


		virtual string getSortBy(Drink&);


};


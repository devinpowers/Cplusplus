

#include "drink.h"

class Barista{
	public:
		Barista();					// Constructor
		Barista(const Barista&);   // Construcotr
		virtual ~Barista();			// Deconsructor
		Barista& operator=(const Barista&); // Operator overloaded

		virtual void deliverDrinks(OrangeJuiceOrderList*)=0;
		virtual void deliverDrinks(BubbleTeaList*)=0;
		virtual void sortDrinks(vector<Drink*>&)=0;

	protected:
		virtual void print(vector<Drink*>&);
		virtual string getSortBy(Drink&)=0;
		virtual void printCall(int,string)=0;

};

class CoolBarista: public Barista{
	public:
		CoolBarista();
		CoolBarista(const CoolBarista&);
		~CoolBarista();
		CoolBarista& operator=(const CoolBarista&);

		virtual void deliverDrinks(OrangeJuiceOrderList*);
		virtual void deliverDrinks(BubbleTeaList*);
		virtual void sortDrinks(vector<Drink*>&);
		virtual string getSortBy(Drink&);
	protected:
		virtual void printCall(int,string);
};

class NewbieBarista: public Barista{
	
	public:
		NewbieBarista();
		NewbieBarista(const NewbieBarista&);
		~NewbieBarista();
		NewbieBarista& operator=(const NewbieBarista&);

		virtual void deliverDrinks(OrangeJuiceOrderList*);
		virtual void deliverDrinks(BubbleTeaList*);
		virtual void sortDrinks(vector<Drink*>&);
		virtual string getSortBy(Drink&);

	protected:
		virtual void printCall(int,string);
		
};


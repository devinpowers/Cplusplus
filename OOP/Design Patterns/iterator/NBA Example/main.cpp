/*
 * IteratorTest.cpp
 *
 *  Created on: JULY
 *      Author: Devin Powers
 */

#include "Array_List.h"
#include "Vector_List.h"
#include "Iterator.h"
#include "NBA_Player.h"

#include <iostream>
#include <string>


// List::~List(){};

List<NBA_Player> * MakeDetroitPistonsLineup()
{
	// Using this Example as a Vector List
	List<NBA_Player> * DetroitPistonsLineup = new VectorList<NBA_Player>();
    // Append to our VectorList

	DetroitPistonsLineup->Append(NBA_Player(std::string("Saddiq Bey"),        std::string("F"), 'L'));
	DetroitPistonsLineup->Append(NBA_Player(std::string("Tyler Cook"),        std::string("F"), 'R'));
	DetroitPistonsLineup->Append(NBA_Player(std::string("Hamidou Diallo"),    std::string("G"), 'R'));
	DetroitPistonsLineup->Append(NBA_Player(std::string("Sekou Doumbouya"),    std::string("F"), 'L'));
	DetroitPistonsLineup->Append(NBA_Player(std::string("Wayne Ellington"),   std::string("G"), 'R'));
	DetroitPistonsLineup->Append(NBA_Player(std::string("Jerami Grant"),      std::string("F"), 'L'));
	DetroitPistonsLineup->Append(NBA_Player(std::string("Killian Hayes"),     std::string("G"),  'R'));
	DetroitPistonsLineup->Append(NBA_Player(std::string("Frank Jackson"),     std::string("G"),  'R'));
	DetroitPistonsLineup->Append(NBA_Player(std::string("Josh Jackson"),      std::string("G/F"),'L'));
    DetroitPistonsLineup->Append(NBA_Player(std::string("Cory Joseph"),       std::string("G"),  'L'));
    DetroitPistonsLineup->Append(NBA_Player(std::string("Dennis Smith Jr."),  std::string("G"),  'L'));
    DetroitPistonsLineup->Append(NBA_Player(std::string("Isaiah Stewart"),    std::string("C"),  'R'));

	return DetroitPistonsLineup;
}

List<NBA_Player> * MakeLosAngelesLakersLineup()
{
	// Using this Example as a Array List

	List<NBA_Player> * LosAngelesLakersLineup = new ArrayList<NBA_Player>();

	LosAngelesLakersLineup->Append(NBA_Player(std::string("Kostas Antetokounmpo"),       std::string("F"), 'L'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Devontae Cook"),              std::string("F"), 'R'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Kentavious Caldwell"),        std::string("G"), 'L'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Alex Caruso"),                std::string("G"), 'L'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Anthony Davis"),              std::string("C"), 'L'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Andre Drummond"),             std::string("C"), 'R'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Jared Dudley"),               std::string("G"),  'R'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Marc Gasol"),                 std::string("C/F"), 'R'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Montrezl Harrell"),           std::string("F"),  'R'));
    LosAngelesLakersLineup->Append(NBA_Player(std::string("Talen Horton-Tucker"),        std::string("G/F"),  'R'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Lebron James"),               std::string("F/F"),  'R'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Kyle Kuzma "),                std::string("F"),  'R'));
	LosAngelesLakersLineup->Append(NBA_Player(std::string("Dennis Schroder"),            std::string("G"),  'R'));
    LosAngelesLakersLineup->Append(NBA_Player(std::string("Markieff Morris"),            std::string("G/F"),  'R'));



	return LosAngelesLakersLineup;
}


void PrintLineup(std::string lineupName, Iterator<NBA_Player> * iterator)
{
	// Pretty Print Function
	// Pass in LineupName  
	// Can "iterate" through both the Array_List and Vector_List using First(), Next()


	std::cout << lineupName << "\n";

	unsigned int lineupPosition = 1;

	for(iterator->First(); !iterator->IsDone(); iterator->Next())

    {  // Loop through the iterator
	    std::cout << lineupPosition++ << ". " << iterator->CurrentItem() << " \n";
    }
	std::cout << "\n";
}

int main()
{

	List<NBA_Player> * DetroitPistonsLineup = MakeDetroitPistonsLineup();

	Iterator<NBA_Player> * DetroitPistonsLineupIterator = DetroitPistonsLineup->CreateIterator();  // Custom iterator to "iterate thru"

	// Lets see if i can print next

	PrintLineup(std::string("Detroit Pistons Lineup"), DetroitPistonsLineupIterator);




	delete DetroitPistonsLineupIterator;
	delete DetroitPistonsLineup;



	
	List<NBA_Player> * LosAngelesLakersLineup = MakeLosAngelesLakersLineup();

	Iterator<NBA_Player> * LosAngelesLakersLineupIterator = LosAngelesLakersLineup->CreateIterator();
	
	PrintLineup(std::string("Los Angeles Lakers Lineup"), LosAngelesLakersLineupIterator);

	delete LosAngelesLakersLineupIterator;

	delete LosAngelesLakersLineup;


}

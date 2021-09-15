/*
 * IteratorTest.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: Devin Powers
 */

#include "Array_List.h"
#include "Vector_List.h"
#include "Iterator.h"
#include "NBA_Player.h"

#include <iostream>
#include <string>

List<NBA_Player> * MakeNewYorkMetsLineup()
{
	// Using this Example as a Vector List
	List<NBA_Player> * newYorkMetsLineup = new VectorList<NBA_Player>();

	newYorkMetsLineup->Append(NBA_Player(std::string("Curtis Granderson"), std::string("CF"), 'L'));
	newYorkMetsLineup->Append(NBA_Player(std::string("Asdrubal Cabrera"),  std::string("SS"), 'S'));
	newYorkMetsLineup->Append(NBA_Player(std::string("Yoenis Cespedes"),   std::string("LF"), 'R'));
	newYorkMetsLineup->Append(NBA_Player(std::string("Jay Bruce"),         std::string("RF"), 'L'));
	newYorkMetsLineup->Append(NBA_Player(std::string("Neil Walker"),       std::string("2B"), 'S'));
	newYorkMetsLineup->Append(NBA_Player(std::string("Lucas Duda"),        std::string("1B"), 'L'));
	newYorkMetsLineup->Append(NBA_Player(std::string("Travis d'Arnaud"),   std::string("C"),  'R'));
	newYorkMetsLineup->Append(NBA_Player(std::string("Jose Reyes"),        std::string("SS"), 'S'));
	newYorkMetsLineup->Append(NBA_Player(std::string("Noah Syndergaard"),  std::string("P"),  'L'));

	return newYorkMetsLineup;
}

List<NBA_Player> * MakeWashingtonNationalsLineup()
{
	// Using this Example as a Array List

	List<NBA_Player> * washingtonNationalsLineup = new ArrayList<NBA_Player>();

	washingtonNationalsLineup->Append(NBA_Player(std::string("Adam Eaton"),        std::string("CF"), 'L'));
	washingtonNationalsLineup->Append(NBA_Player(std::string("Wilmer Difo"),       std::string("SS"), 'R'));
	washingtonNationalsLineup->Append(NBA_Player(std::string("Daniel Murphy"),     std::string("2B"), 'L'));
	washingtonNationalsLineup->Append(NBA_Player(std::string("Bryce Harper"),      std::string("RF"), 'L'));
	washingtonNationalsLineup->Append(NBA_Player(std::string("Ryan Zimmerman"),    std::string("1B"), 'L'));
	washingtonNationalsLineup->Append(NBA_Player(std::string("Anthony Rendon"),    std::string("3B"), 'R'));
	washingtonNationalsLineup->Append(NBA_Player(std::string("Matt Wieters"),      std::string("C"),  'R'));
	washingtonNationalsLineup->Append(NBA_Player(std::string("Michael Taylor"),    std::string("CF"), 'R'));
	washingtonNationalsLineup->Append(NBA_Player(std::string("Stephen Strasburg"), std::string("P"),  'S'));

	return washingtonNationalsLineup;
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
	    std::cout << lineupPosition++ << ". " << iterator->CurrentItem() << "\n";
    }
	std::cout << "\n";
}

int main()
{

	List<NBA_Player> * newYorkMetsLineup = MakeNewYorkMetsLineup();

	Iterator<NBA_Player> * newYorkMetsLineupIterator = newYorkMetsLineup->CreateIterator();  // Custom iterator to "iterate thru"

	PrintLineup(std::string("New York Mets Lineup"), newYorkMetsLineupIterator);

	delete newYorkMetsLineupIterator;
	delete newYorkMetsLineup;



	
	List<NBA_Player> * washingtonNationalsLineup = MakeWashingtonNationalsLineup();

	Iterator<NBA_Player> * washingtonNationalsLineupIterator = washingtonNationalsLineup->CreateIterator();
	
	PrintLineup(std::string("Washington Nationals Lineup"), washingtonNationalsLineupIterator);

	delete washingtonNationalsLineupIterator;

	delete washingtonNationalsLineup;


}

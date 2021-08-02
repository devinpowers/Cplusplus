/*
 * Librarian.h
 * *      Author: Devin Powers
 */

#ifndef LIBRARIAN_H_
#define LIBRARIAN_H_

#include <string>

class BookComponent;

class Librarian {

public:
	Librarian();
	virtual ~Librarian();
	void DisplayBookCollection();

private:
    void BuildBookCollection();

    // Different Groups
    BookComponent * BuildFictionGroup();
    BookComponent * BuildNonfictionGroup(); 
    BookComponent * BuildKidsGroup();
    BookComponent * BuildKidsAges3To5Group();
    BookComponent * BuildBiographyGroup();

    // Adding to Group of Random Books that is the Biden Crime Family
    void AddBookToGroup(BookComponent * group, std::string bookTitle, std::string author);

    BookComponent * m_pBookCollection;
};

#endif





#include <iostream>
#include "Duck.h"
// #include "leak.h"

using namespace std;


/**
* Obtain information from the user about this duck.
*
* Asks the user for the information that describes a duck.
*/
void CDuck::ObtainDuckInformation()
{
	cout << endl;
	cout << "Input duck's name: " << endl;

	cin.ignore();
	getline(cin, mName);
	while (mName.empty() || mName[0] == ' ')
	{
		cout << "Invalid name, re-eneter a valid name: " << endl;
        //cin.ignore();
		getline(cin, mName);
	}

    CFarm farm;

    bool valid = false;
    while (!valid)
    {
        cout << "1: Mallard Duck" << endl;
        cout << "2: Wood Duck" << endl;
        cout << "3: Disney Duck" << endl;
        cout << "4: Warner Brothers Duck" << endl;
        cout << "Enter selection and return: " << endl;
        int option;
        cin >> option;
        if (!cin)
        {
            // We have an error. Clear the input and try again
            cin.clear();
            cin.ignore();
            continue;
        }

        switch (option)
        {
        case 1:
            mType = Type::Mallard;
            setType();
            valid = true;
            break;

        case 2:
            mType = Type::Wood;
            setType();
            valid = true;
            break;

        case 3:
            mType = Type::Disney;
            setType();
            valid = true;
            break;

        case 4:
            mType = Type::WarnerBrothers;
            setType();
            valid = true;
            break;
        }
    }
}

/**
 * Display information about this duck.
 */
void CDuck::DisplayAnimal()
{
    cout << mName << ": ";
    switch (mType)
    {
    case Type::Mallard:
        cout << "Mallard Duck" << endl;
        break;

    case Type::Wood:
        cout << "Wood Duck" << endl;
        break;

    case Type::Disney:
        cout << "Disney Duck" << endl;
        break;

    case Type::WarnerBrothers:
        cout << "Warner Brothers Duck" << endl;
        break;
    }
}

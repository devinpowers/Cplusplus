
#include <iostream>
#include "Cow.h"
// #include "leak.h"

using namespace std;

 /**
  * Obtain information from the user about this cow.
  *
  * Asks the user for the information that describes a cow.
  */
void CCow::ObtainCowInformation()
{
    cout << endl;
    cout << "Input information about the cow" << endl;

    // Obtain the name. This is easy, since it's just a
    // string.
    cout << "Name: ";
    cin >> mName;

    // Obtain the type using a menu. We have a loop so
    // we can handle errors.
    bool valid = false;
    while (!valid)
    {
        cout << "1: Bull" << endl;
        cout << "2: Beef Cow" << endl;
        cout << "3: Milk Cow" << endl;
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
            mType = Type::Bull;
            valid = true;
            break;

        case 2:
            mType = Type::BeefCow;
            valid = true;
            break;

        case 3:
            mType = Type::MilkCow;
            valid = true;
            break;
        }

    }

    if (mType == Type::MilkCow)
    {
        valid = false;
        while (!valid)
        {
            cout << "Enter milk production in gallons per day: ";

            cin.clear();
            cin.ignore();
            cin >> mMilkProduction;
            if (cin)
            {
                valid = true;
            }
        }
    }
    else
    {
        // If not a milk cow, we have no milk production
        mMilkProduction = 0;
    }
}

/**
 * Display information about this cow.
 */
void CCow::DisplayAnimal()
{
    cout << mName << ": ";
    switch (mType)
    {
    case Type::Bull:
        cout << "Bull" << endl;
        break;

    case Type::BeefCow:
        cout << "Beef Cow" << endl;
        break;

    case Type::MilkCow:
        cout << "Milk Cow/" << mMilkProduction << " GPD" << endl;
        break;
    }
}
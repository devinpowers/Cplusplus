
#include "TacoBell.h"

#include "tacobelldoritos.h"
#include "tacobellregular.h"
#include "tacobellveggie.h"

TacoBell::TacoBell() {}

TacoBell::~TacoBell() {}

Taco * TacoBell::CreateTaco(std::string type)
{
    if (type == "Veggie" )
    {
        return new TacoBellVeggie();
    }
    else if (type ==  "Regular" )
    {
        return new TacoBellRegular();
    }
    else
    {
        return new TacoBellDoritos();

    }
    
}


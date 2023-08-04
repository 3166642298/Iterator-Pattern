#include "MenuItem.h"

string MenuItem::getName()
{
    return this->name;
}

string MenuItem::getDescription()
{
    return this->description;
}

bool MenuItem::isVegetarian()
{
    return this->vegetarian;
}

double MenuItem::getPrice()
{
    return this->price;
}

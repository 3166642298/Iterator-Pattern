#include "ConcreteAggregate.h"

int ConcreteAggregate::getCount()
{
	return this->dinerMenu.size();
}

MenuItem ConcreteAggregate::getItem(int index)
{
	return this->dinerMenu[index];
}

void ConcreteAggregate::addItem(MenuItem menuItem)
{
	this->dinerMenu.push_back(menuItem);
}

Iterator* ConcreteAggregate::createIterator()
{
	return new ConcreteIterator(this);
}


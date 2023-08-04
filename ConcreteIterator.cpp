#include "ConcreteIterator.h"

ConcreteIterator::ConcreteIterator(ConcreteAggregate* aggregate)
{
	this->concreteAggregate = aggregate;
	this->currentIndex = 0;
}

MenuItem ConcreteIterator::next()
{	
	this->currentIndex++;
	return this->concreteAggregate->getItem(this->currentIndex-1);
}

bool ConcreteIterator::hasNext()
{
	return (this->currentIndex >= this->concreteAggregate->getCount()) ? false : true;
}

void ConcreteIterator::showItem(MenuItem menuItem)
{
	cout << menuItem.getName() << " " << menuItem.getDescription() << " " << menuItem.isVegetarian() << " " << menuItem.getPrice() << endl;
}


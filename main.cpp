#include<iostream>
#include"Iterator.h"
#include"Aggregate.h"
#include"ConcreteAggregate.h"
#include"ConcreteIterator.h"
#include"MenuItem.h"
using namespace std;
int main()
{
	ConcreteAggregate* concreteAggregate = new ConcreteAggregate();
	concreteAggregate->addItem(MenuItem("Óã", "ºìÉÕÓã",false, 20.3));
	concreteAggregate->addItem(MenuItem("Óã", "ÇåÕôÓã", false, 30.5));
	concreteAggregate->addItem(MenuItem("Óã", "Ëá²ËÓã", false, 40.3));
	concreteAggregate->addItem(MenuItem("Óã", "Ì¼¿¾Óã", false, 10.3));

    Iterator* concreteIterator = new ConcreteIterator(concreteAggregate);
	Iterator* concreteIterator1 = concreteAggregate->createIterator();
	while (concreteIterator->hasNext()==true)
	{
		concreteIterator->showItem(concreteIterator->next());
	}
	while (concreteIterator1->hasNext() == true)
	{
		concreteIterator1->showItem(concreteIterator1->next());
	}
	return 0;
}
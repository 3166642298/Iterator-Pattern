#pragma once
#ifndef CONCRETEAGGREGATE_H
#define CONCRETEAGGREGATE_H
#include"Aggregate.h"
#include"Iterator.h"
#include<vector>
#include"MenuItem.h"
#include"ConcreteIterator.h"
class ConcreteIterator;
class ConcreteAggregate:public Aggreate {
private:
	vector<MenuItem> dinerMenu;
public:
	int getCount();
	MenuItem getItem(int index);
	void addItem(MenuItem menuItem);
	Iterator* createIterator() override;
};
#endif // !CONCRETEAGGREGATE_H

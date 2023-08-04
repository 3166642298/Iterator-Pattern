#pragma once
#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H
#include"Iterator.h"
#include"ConcreteAggregate.h"
class ConcreteAggregate;
class ConcreteIterator :public Iterator {
private:
	ConcreteAggregate* concreteAggregate;
	int currentIndex;
public:
	ConcreteIterator(ConcreteAggregate* aggregate);
	MenuItem next() override;
	bool hasNext() override;
	void showItem(MenuItem menuItem) override;
};
#endif // !CONCRETEITERATOR_H

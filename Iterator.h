#pragma once
#ifndef ITERATOR_H
#define ITERATOR_H
#include<iostream>
#include"MenuItem.h"
using namespace std;
class Iterator {
public:
	virtual MenuItem next();
	virtual bool hasNext();
	virtual void showItem(MenuItem menuItem);
};
#endif // !ITERATOR_H

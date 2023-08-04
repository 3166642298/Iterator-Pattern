#pragma once
#ifndef AGGREGATE_H
#define AGGREGATE_H
#include<iostream>
#include"Iterator.h"
using namespace std;
class Aggreate {
public:
	virtual Iterator* createIterator();
	virtual ~Aggreate();
};
#endif // !AGGREGATE_H

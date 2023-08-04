#pragma once
#ifndef MENUITEM_H
#define MENUITEM_H
#include<iostream>
using namespace std;
class MenuItem {
private:
	string name;
	string description;
	bool vegetarian;
	double price;
public:
	MenuItem() = default;
	MenuItem(string name1,string description1,bool vegetarian1,double price1):name(name1),description(description1),vegetarian(vegetarian1),price(price1){}
	string getName();
	string getDescription();
	bool isVegetarian();
	double getPrice();
};
#endif // !MENUITEM_H

#pragma once
#include <iostream>

const int MAX = 4;
class ListNew 
{
public:
	typedef int Item;

	ListNew(const Item item0[] = NULL, int n = 0);
	~ListNew();

	bool isFull() const;
	bool isEmpty() const;
	bool addData(const Item& n);
	void visit(void(*pf)(Item& item));
private:
	Item item[MAX];
	int number;
};
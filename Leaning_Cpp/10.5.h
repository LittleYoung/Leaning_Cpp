#pragma once
#include <iostream>

const	int MAX = 5;

struct customer
{
	char	fullname[35];
	double	payment;		//pay
};

typedef customer Item;

class Stack 
{
public:
	Stack();
	~Stack();
	
	bool	push(const Item& n);
	bool	pull(Item& n);

private:
	Item	item[MAX];
	int		top;
	double	total;
};
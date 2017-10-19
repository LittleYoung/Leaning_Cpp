#include "10.8.h"

using namespace std;
ListNew::ListNew(const Item item0[], int n)
{
	if (item0 ==NULL) 
	{
		number = 0;
		return;
	}
	if (n > MAX) 
	{
		number = MAX;
	}
	else
	{
		number = n;
	}

	for (int i = 0; i < number; ++i)
	{
		item[i] = item0[i];
	}
}

ListNew::~ListNew()
{
}

bool ListNew::isFull() const
{
	if (number == MAX)
	{
		cout << "List is Full." << endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool ListNew::isEmpty() const
{
	if (number == 0) 
	{
		cout << "List is Empty." << endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool ListNew::addData(const Item & n)
{
	if (!isFull()) 
	{
		item[number++] = n;
		return true;
	}
	else
	{
		return false;
	}
}

void ListNew::visit(void(*pf)(Item& item))
{
	for (int i = 0; i < number; ++i)
	{
		pf(item[i]);
	}
}

static void show(ListNew::Item & item)
{
	cout << "Item is: " << item << endl;
}

int main() 
{
	ListNew list;
	list.visit(show);
	cout << "Is Empty: " << list.isEmpty() << endl;

	ListNew::Item arr[] = { 1,3,5 };
	ListNew list2(arr, sizeof(arr) / sizeof(arr[0]));
	list2.visit(show);

	cout << "Is Full: " << list2.isFull() << endl;
	cout << "Is Empty: " << list2.isEmpty() << endl;
	cout << "Add a Data: " << list2.addData(7) << endl;

	list2.visit(show);
	system("pause");
	return 0;
}
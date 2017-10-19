#include "10.5.h"

using namespace std;
Stack::Stack() :top(0), total(0)
{
}

Stack::~Stack()
{
}

bool Stack::push(const Item & n)
{
	if (top < MAX) 
	{
		item[top++] = n;
		cout << "Deposit " << total << " yuan." << endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pull(Item & n)
{
	if (top>0) 
	{
		n = item[--top];
		total += n.payment;
		cout << "Take out " << total << " yuan." << endl;
		return true;
	}
	else
	{
		return false;
	}
}

int main() 
{
	Stack stack;
	char ch;
	cout << "Please Input Call Stack: a (push) ?  b (pull) ?" << endl;

	while (cin >> ch)
	{
		
		switch (ch)
		{
		case 'a':
		case 'A':
		{
			Item one;
			cout << "Please input your name: ";
			cin >> one.fullname;

			cout << "Please input deposit: ";
			cin >> one.payment;
			cin.sync();

			if (stack.push(one))
			{
				cout << "deposit ok! " << one.fullname << " is " << one.payment << " yuan." << endl;
				break;
			}
			else
			{
				cout << "error...." << endl;
				break;
			}
		}

		case 'b':
		case 'B':
		{
			Item one;
			cout << "qu" << endl;
			if (stack.pull(one)) 
			{
				cout << "take out ok! " << one.fullname << " is " << one.payment << " yuan." << endl;
				break;
			}
			else
			{
				cout << "error...." << endl;
				break;
			}

		}
		default:
			cout << "Please Input a and b?" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}
#include "10.6.h"

using namespace std;
Move::Move(double a, double b)
{
	x = a;
	y = b;
}

Move::~Move()
{
}

void Move::showmove() const
{
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
}

Move Move::add(const Move & m) const
{
	Move move(x + m.x, y + m.y);
	return move;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}

int main() 
{
	double x[3], y[3];
	Move move[3];
	for (int i = 0; i < 2; i++)
	{
		cout << "Please Input x.pos and y.pos: " << endl;
		cout << "X: ";
		cin >> x[i];

		cout << "Y: ";
		cin >> y[i];
		cout << endl;

		move[i].reset(x[i], y[i]);
	}

	move[2] = move[0].add(move[1]);	//[2]=[0]+[1]

	//show
	for (int i = 0; i < 3; i++) 
	{
		cout << i + 1 << "# pos is: " << endl;
		move[i].showmove();
	}

	system("pause");
	return 0;
}
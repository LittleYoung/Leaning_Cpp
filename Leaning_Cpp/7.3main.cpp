#include<iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void A(box b) 
{
	cout << "maker: " << b.maker << " height: " << b.height << " width: " << b.width << " length: " << b.length << "  volume: " << b.volume << endl;
}

void B(box *pbox)
{
	cout << "volume: " << pbox->volume << " = height " << pbox->height << " * width " << pbox->width << " * length " << pbox->length << endl;
}

void C(box b)
{
	cout << "Box maker: " << b.maker << endl;
	cout << "Box height: " << b.height << endl;
	cout << "Box width: " << b.width << endl;
	cout << "Box length: " << b.length << endl;
	cout << "Box volume: " << b.volume << endl;
}

int main() 
{
	char title[3]{ 'a','b','c' };
	box b = { "Cube",2,2,2,8 };
	cout << "Please input the title number: (a / b / c)? " << endl;
	if (cin >> title[0]) A(b);
	if (cin >> title[0]) B(&b);
	if (cin >> title[0]) C(b);
	system("pause");
	return 0;
}
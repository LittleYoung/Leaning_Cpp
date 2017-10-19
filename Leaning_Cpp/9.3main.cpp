#include <iostream>
#include<string>
using namespace std;

struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	chaff *chaffnew = new chaff[2];
	char *ch = new char[20];

	for (int i = 0; i < 2; i++) 
	{
		cout << "# " << i + 1 << " :";
		cin.getline(ch, 20);
		strcpy_s(chaffnew[i].dross, ch);
		cout << "flag:   ";
		cin >> chaffnew[i].slag;
		cin.sync();
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "dross: " << chaffnew[i].dross << "  ,slag: " << chaffnew[i].slag << endl;
	}

	system("pause");
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int list[10];

	for (int i=0; i!=10;i++)
	{
		cin >> list[i];
	}

	int temp = list[0];
	for (int i=1; i<10;i++)
	{
		if (list[i]>temp)
		{
			temp = list[i];
		}
	}
	cout << temp;
}

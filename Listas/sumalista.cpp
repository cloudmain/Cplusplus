#include <iostream>

using namespace std;

int main()
{
	int list[10];

	for (int i=0; i!=10;i++)
	{
		cin >> list[i];
	}
	int res=0;
	for (int i=0; i!=10;i++)
	{
		res+=list[i];
	}
	cout << "La suma de los elementos es : " << res;
}

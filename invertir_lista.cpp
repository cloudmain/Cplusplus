#include <iostream>

using namespace std;



int main()
{
	int list[5];
	int temp[5];
	for (int i=0; i!=5;++i)
	{
		cin >> list[i];
	}

	for (int i=0; i!=5;++i)
	{
		temp[i] = list[i];
	}
	int count =4;
	for (int i=0; i!=5;++i)
	{
		list[i] = temp[count];
		--count;
	}
	cout << "{";
	for(int i=0; i!=5;++i)
	{
		cout << list[i]<<" ";
	}
	cout << "}";
	return 0;
}




#include <iostream>

using namespace std;

int main()
{

	int x;
	cout << "Ingrese la cantidad de numeros primos : " << endl;
	cin >> x;
	int lista[x];

	for (int i=0; i!=x;i++)
	{
		lista[i]=i;
	}

	for (int i=2;i!=x;i++)
	{
 		int a=0;
 		for(int j=1;j<=x;j++)
 		{
    			if(i%j==0)
   	 			a++;
				if(a==3)
				break;
 		}
 		if (a==2)
		{
 			cout << lista[i] << " ";
 		}
 	}
	return 0;
}


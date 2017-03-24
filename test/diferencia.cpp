#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cout << "Ingrese primero numero : " << endl;
	cin >> x;
	cout << "Ingrese segundo numero : " << endl;
	cin >> y;
	if(x>y)
	cout << x << " es mayor que "<<y << endl;
	if(x<y)
	cout << x << " es menor que " << y <<endl;
	else
	cout << "son iguales " << endl;

}

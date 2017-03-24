#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	cout << "ingrese primer numero"<<endl;
	cin >> x;
	cout << "ingrese segundo numero"<<endl;
	cin >> y;

	z=x;
	x=y;
	y=z;
	cout << "ahora el primer numero es " << x <<endl;
	cout << "y el segundo numero es " << y <<endl;
	return 0;
}

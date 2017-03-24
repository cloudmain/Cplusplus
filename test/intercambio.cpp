#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cout << "Ingrese primer numero : " << endl;
	cin >> x;
	cout << "Ingrese segundo numero : " << endl;
	cin >> y;

	x = x+y;
	y = x-y;
	x = x -y;
	cout << "Ahora el primer numero es : "<< x <<endl;
	cout << "Ahora el segundo numero es : " << y <<endl;
	return 0;
}

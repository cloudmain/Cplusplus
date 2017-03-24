#include <iostream> 

using namespace std;

int main()
{
	int x,y,z;

	cout << "Ingrese el primer numero : " <<endl;
	cin >> x;
	cout << "Ingrese el segundo numero : "<<endl;
	cin >> y;
	cout << "Ingrese el tercer numero : "<<endl;
	cin >> z;
	if(x>y && x>z ){
		cout << x << " es mayor "<< endl;
		if(z>x && z>y)
		cout << z << " es mayor "<< endl;
	}
	else if(y>z) 
		cout << y << " es mayor " <<endl;
	else 
		cout << z << " es mayor " <<endl;
}

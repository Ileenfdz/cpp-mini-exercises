#include <iostream>
using namespace std;
int main ()
{
	int num;
	int cuadrado;

	cout<< "A continuacion, escriba un numero para mostrar su cuadrado"<< endl;
	cout << "Digame un numero: ";
	cin>>num;
	cuadrado=num*num;

	cout<< "Este es su numero al cuadrado: "<< cuadrado << endl;

	system ("PAUSE");
	return 0;
}
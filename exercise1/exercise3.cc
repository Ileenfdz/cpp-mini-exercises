#include <iostream>
using namespace std;
int main ()
{
	int num;
	int cuadrado;

	cout<< "A continuación, escriba un número para mostrar su cuadrado"<< endl;
	cout << "Dígame un número: ";
	cin>>num;
	cuadrado=num*num;

	cout<< "Este es su número al cuadrado: "<< cuadrado << endl;

	system ("PAUSE");
	return 0;
}
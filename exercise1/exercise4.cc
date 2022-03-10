#include <iostream>
using namespace std;
int main ()
{
	int num1, num2, rest;
	
	cout<<"A continuación, introduzca dos números para hacer una division"<< endl;
	cout<<"Introduzca un número: ";
	cin>>num1;
	cout<<"Introduzca el segundo número: ";
	cin>>num2;

	rest = num1/num2;

	cout<<"Este es el resto de la división: "<< rest << endl;

	system ("PAUSE");
	return 0;
}
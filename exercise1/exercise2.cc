#include <iostream>
using namespace std;
int main ()
{
	char letra;
	
	cout<< "A continuación, introduzca una letra para mostrarle la siguiente"<< endl;
	cout<< "Introduzca una letra: ";
	cin>>letra;

	letra++;
	cout<< "El siguiente caracter es: "<< letra << endl;
	
	system ("PAUSE");
	return 0;

}
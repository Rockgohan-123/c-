#include <iostream>

using namespace std;

int main(){
	int x, y, suma=0, resta=0, multiplicacion=0, division=0;
	
	cout<<"Introduzca el valor de x = "; cin>>x;
	cout<<"\nIntroduzca el valor de y = "; cin>>y;
	
	suma = x +y; resta = x - y; multiplicacion = x*y; division = x/y;

	cout<<"\nLa suma es = " <<suma <<endl;
	cout<<"La resta es = " <<resta <<endl;
	cout<<"La multiplicación es = " <<multiplicacion <<endl;
	cout<<"La división es = " <<division <<endl;
	return 0;
}
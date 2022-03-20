#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	long x,y,peticion;
	long suma=0,resta=0,multiplicacion=0,division=0;

	cout<<"HELLO WORLD"<<endl;

	cout<<"INTRODUCE EL VALOR DE X = ";
	cin>>x;

	cout<<"INTRODUCE EL VALOR DE y = ";
	cin>>y;
	
	cout<<"Que quieres hacer ?\n";
	cin>>peticion;
	
	switch(peticion){
		case 1:
			suma = x+y;
			cout<<"El resultado es = "<<suma<<endl;
		break;

		case 2:
			resta = x-y;
			cout<<"El resultado es = "<<resta<<endl;
		break;

		case 3:
			multiplicacion = x*y;
			cout<<"El resultado es = "<<multiplicacion<<endl;
		break;

		case 4:
			division = x/y;
			cout<<"El resultado es = "<<division<<endl;
		break;

		case 5:
			exit (-1);
		break;
	}

	return 0;
}

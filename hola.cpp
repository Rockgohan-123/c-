#include <iostream>
#include <string>

using namespace std;

void SetFunction(int,float[3]);
void GetFunction();


int main(){
	GetFunction();
	return 0;
}


void GetFunction(){

	float x,y;
	float suma=0,resta=0,multiplicacion=0,division=0;
	int peticion;

	cout<<"HELLO WORLD"<<endl;

	cout<<"INTRODUCE EL VALOR DE X = ";
	cin>>x;

	cout<<"INTRODUCE EL VALOR DE y = ";
	cin>>y;
	
	cout<<"Que quieres hacer ?\n";
	cin>>peticion;
	

	suma = x+y;
	resta = x-y;
	multiplicacion = x*y;
	division = x/y;

	float pasar[4]={suma,resta,multiplicacion,division};

	SetFunction(peticion, pasar);

}

void SetFunction(int peticion,float pasar[3]){

	float suma = pasar[0];
	float resta = pasar[1];
	float multiplicacion = pasar[2];
	float division = pasar[3];

	switch(peticion){
		case 1:
			cout<<"El resultado de la suma es = "<<suma<<endl;
		break;

		case 2:
			cout<<"El resultado de la resta es = "<<resta<<endl;
		break;

		case 3:
			cout<<"El resultado de la multiplicacion es = "<<multiplicacion<<endl;
		break;

		case 4:
			cout<<"El resultado de la division es = "<<division<<endl;
		break;

		case 5:
		
			cout<<"El resultado de la suma es = "<<suma<<endl;
			cout<<"El resultado de la resta es = "<<resta<<endl;
			cout<<"El resultado de la multiplicacion es = "<<multiplicacion<<endl;
			cout<<"El resultado de la division es = "<<division<<endl;
		
		break;

		default: 
			exit (-1);
		
	}
}

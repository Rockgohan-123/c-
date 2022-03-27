//LIBRERIAS
#include <iostream>
#include <string>

//STD
using namespace std;

//DECLARACION DE FUNCIONES

void SetFunction(int,float[3]);
void GetFunction();

//INICIO

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

	if(x>=0){
		cout<<"EL NUMERO ES POSITIVO\n";
	}
	else{
		cout<<"EL NUMERO ES NEGATIVO\n";
	}

	cout<<"INTRODUCE EL VALOR DE Y = ";
	cin>>y;

	if(y>=0){
		cout<<"EL NUMERO ES POSITIVO\n";
	}
	else{
		cout<<"EL NUMERO ES NEGATIVO\n";
	}
	
	cout<<"Que quieres hacer? = ";
	cin>>peticion;
	

	suma = x+y;
	resta = x-y;
	multiplicacion = x*y;
	division = x/y;

	float pasar[4]={suma,resta,multiplicacion,division};
	SetFunction(peticion, pasar);
}


void SetFunction(int peticion,float pasar[3]){

	switch(peticion){
		case 1:
			cout<<"El resultado de la suma es = "<<pasar[0]<<endl;
		break;

		case 2:
			cout<<"El resultado de la resta es = "<<pasar[1]<<endl;
		break;

		case 3:
			cout<<"El resultado de la multiplicacion es = "<<pasar[2]<<endl;
		break;

		case 4:
			cout<<"El resultado de la division es = "<<pasar[3]<<endl;
		break;

		case 5:
			cout<<"El resultado de la suma es = "<<pasar[0]<<endl;
			cout<<"El resultado de la resta es = "<<pasar[1]<<endl;
			cout<<"El resultado de la multiplicacion es = "<<pasar[2]<<endl;
			cout<<"El resultado de la division es = "<<pasar[3]<<endl;
		break;

		default: 
			cout<<"Okey saliendo del programa...";
			for(int i = 0;i<4;i++){
				cout<<""<<i+1;
				cout<<"..";
			}
			cout<<"\n";
			exit (-1);
		break;	
	}
}

//FINAL
#include <iostream>
#include <string>

using namespace std;

void MatricesFuntions();

int main(){
	MatricesFuntions();
	return 0;
}

void MatricesFuntions(){
	//Declaracion de las varibles
	int numeros[20][20], filas,columnas;

	//Entrada del dato para almacenar en la varible filas
	cout<<"Cuantas filas quiere que tenga su matriz = ";
	cin>>filas;

	//Ver que la variable fila es valida
	if(filas<=20){
		cout<<"Okey seguimos."<<endl;
	}
	else{
		cout<<"Error 404."<<endl;
		cout<<"No puede ser mayor a 20."<<endl;
		exit(-1);
	}

	//Entrada del dato para almacenar en la varible filas
	cout<<"Cuantas columnas quiere que tenga su matriz = ";
	cin>>columnas;

	//Ver que la variable columna es valida
	if(columnas<=20){
		cout<<"Okey seguimos."<<endl;
	}
	else{
		cout<<"Error 404."<<endl;
		cout<<"No puede ser mayor a 20."<<endl;
		exit(-1);
	}

	//Entrada del bucle (for) para almacenar los num. en la matriz
	for(int f = 0;f<filas; f++){
		for(int c = 0; c<columnas; c++){
			cout<<"Digite el valor de la fila["<<f<<"] Columna["<<c<<"] = ";
			cin>>numeros[f][c];
		}
	}

	//Entrada del bucle (for) para imprimir los num. guardados en la matriz
	for(int f = 0;f<filas; f++){
		for(int c = 0; c<columnas; c++){
			cout<<"En la fila["<<f<<"] Columna["<<c<<"] se almceno este numero = ";
			cout<<numeros[f][c]<<endl;
		}
	}	

}
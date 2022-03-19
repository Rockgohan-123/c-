#include <iostream>

using namespace std;

int main(){
	char x;
	
	for(int y=0;y<5;y++){

		cout<<"\nDigite la vocal = "; cin>>x;

		if((x>0) /*|| (x>0)*/){
			cout<<"Es un número"<<endl;
		}

		else{

			if((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u')){
				cout<<"Es una vocal minuscula" <<endl;
			}
		
			else if((x == 'A') || (x == 'E') || (x == 'I') || (x == 'O') || (x == 'U')){
				cout<<"Es una voal mayuscula"<<endl;
			}

			else{
				cout<<"No es una vocal"<<endl;
			}
		}
	}

	return 0;
    //2:32
}

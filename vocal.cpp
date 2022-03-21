#include <iostream>

using namespace std;

int main(){
	char x;
	
	for(int y=0;y<5;y++){

		cout<<"\nDigite la vocal = "; cin>>x;

		if((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u')){
			cout<<"\nEs una vocal minuscula" <<endl;
		}
		
		else if((x == 'A') || (x == 'E') || (x == 'I') || (x == 'O') || (x == 'U')){
			cout<<"\nEs una vocal mayuscula"<<endl;
		}

		else if((x<0) || (x>0)){
			cout<<"\nEs un numero"<<endl;
		}
		else{
			cout<<"\nNo es una vocal"<<endl;		
		}
	}

	return 0;
    //2:32
}

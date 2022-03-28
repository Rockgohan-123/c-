#include <iostream>
#include <string>

using namespace std;

//void MultiFunction();
void Multi1Function();

int main(){
	Multi1Function();
	//MultiFunction();
	return 0;
}

void Multi1Function(){
	cout<<"Que numero quieres multiplicar = ";
	int a; cin>>a;

	cout<<"qu quieres hacer = ";
	int swi; cin>>swi;

	switch(swi){
		case 1:
			cout<<a<<endl;
		break;

		case 2:
			cout<<a+a<<endl;
		break;

		case 3:
			cout<<a+a+a<<endl;
		break;

		case 4:
			cout<<a+a+a+a<<endl;
		break;

		default:
			cout<<a+a+a+a+a<<endl;
	}

}

/*void MultiFunction(){
	for(int i = 2; i<10; i++){
		cout<<i+i+i<<endl;
	}
}
*/


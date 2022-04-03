#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;
void GetFunction();

int main(){
	GetFunction();
	return 0;
}

void GetFunction(){

	char palabra[30],result[30];
	int i=0;
	
	cout<<"What word do you want = ";
	cin.getline(palabra,30,'\n');

	do{
		cout<<endl;

		cout<<"You have left ["<<(5-i)<<"] lifes"<<endl;
		
		cout<<"Enter your result = ";
		cin.getline(result,30,'\n');

		if(strcmp(palabra,result) == 0){
			cout<<"Very good"<<endl;
			exit(-1);
		}
		else{
			cout<<"Fail, try again"<<endl;
		}

		i++;
	}while(i<5);

	cout<<"\n!!!Opportunities are over!!!"<<endl;
}
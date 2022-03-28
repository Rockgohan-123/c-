#include <iostream>
#include <string>

using namespace std;

void BoolFunction();

int main(){
	BoolFunction();
	return 0;
}

void BoolFunction(){
	int a; cin>>a;

	bool If = a>0;

	if(If){
		cout<<a<<" IS TRUE"<<endl;
	}

	else{
		cout<<a<<" IS FALSE"<<endl;
	}
}
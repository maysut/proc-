#include <iostream>
using namespace std;

bool cmp(int a,int b){
	if(a>b){
		return true;
	}else{
		return false;
	}
}
int main(){
	int a=5;
	int b=6;
	if(cmp(a,b)){
		cout <<"a大于b"<< endl;
	}else{
		cout << "a小于b"<< endl;
	}
	return 0;
	
}

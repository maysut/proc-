#include <iostream>
#include <exception>
using namespace std;
int main(){
	try{
		throw "throw exception！";

	}catch(const char* e){
		cout << "错误日志："<< e<<endl;		
	}
	return 0;	
}

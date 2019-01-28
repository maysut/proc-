#include <iostream>
#include <exception>
using namespace std;
struct MyException:public exception{
	const char * what() const throw(){
		return "这个错误很明显:";
	}
};
int main(){
	try{
		throw MyException();
	}catch(MyException e){
		cout << "系统错误:"<<e.what()<<endl;
	}catch(exception& es){
		cout << "dfsdf"<< endl;
	}
	return 0;
}

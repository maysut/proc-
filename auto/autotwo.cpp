#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>

using namespace std;
int main(){
	int a7[3]={1,2,3};
	auto &b7=a7;
	cout <<typeid(b7).name()<<endl;
	cout << typeid(&b7).name()<<endl;
	int a[10];
	auto b=a;
	cout << typeid(b).name()<<endl;
	auto &c=a;
	cout << typeid(c).name()<<endl;
 std::vector<std::string> vs;
    for (std::vector<std::string>::iterator i = vs.begin(); i != vs.end(); i++)
    {
	cout << "sdf" << endl;
	}
	return 0;
}

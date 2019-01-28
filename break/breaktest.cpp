#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=10;i++){
		cout << "数据：" << i << endl;
		if(i==6){
			cout << "跳出循环" <<endl;
			break;
		}
	}
	return 0;
}

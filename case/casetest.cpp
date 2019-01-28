#include <iostream>
using namespace std;
int main(){
	int a;
	cout << "请输入数字：";
	cin >> a;
	switch(a){
		case 1:
			cout << "第一条数据" <<endl;
			break;
		case 2:
			cout << "第二条数据" << endl;
			break;
		case 3:
			cout << "第三条数据" << endl;
			break;
		case 4:
			cout << "第四条数据" << endl;
			break;
		default:
			cout << "没有找到这个记录" << endl; 
	}
	char instr;
	cout << "请输入字母：";
	cin >> instr;
	switch(instr){
		case 'a':
			cout << "你选择的是A" << endl;
			break;
		case 'b':
			cout << "你选择的是B" << endl;
			break;
		case 'c':
			cout << "你选择的是C" << endl;
			break;
		case 'd':
			cout << "你选择的是D" << endl;
			break;
		default:
			cout << "你确定输入的是正确的答案" << endl;
	}
	return 0;
}

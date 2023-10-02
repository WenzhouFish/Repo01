#include <bits/stdc++.h>
using namespace std;
string tranNum(int &num){
	string str;
	int x;
	char op;
	while(num>0){
		x = num % 2;//每一次取得的余数 
		op = '0' + x;//得到的二进制数(字符) 
		str = op + str;//加到字符串里面，注意是加到最前面，因为余数要倒着写，这里不能写成 str = str + op;
		num /= 2; 
	}
	return str;
}
int main(){
	int num;
	string str;//str用来接收字符串型的二进制数
	
	cout << "输入一个十进制数" << endl; 
	cin >> num;
	
	str = tranNum(num);
	
	cout << "对应的二进制数为:" << str;	
} 
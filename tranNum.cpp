#include <bits/stdc++.h>
using namespace std;
string tranNum(int &num){
	string str;
	int x;
	char op;
	while(num>0){
		x = num % 2;//ÿһ��ȡ�õ����� 
		op = '0' + x;//�õ��Ķ�������(�ַ�) 
		str = op + str;//�ӵ��ַ������棬ע���Ǽӵ���ǰ�棬��Ϊ����Ҫ����д�����ﲻ��д�� str = str + op;
		num /= 2; 
	}
	return str;
}
int main(){
	int num;
	string str;//str���������ַ����͵Ķ�������
	
	cout << "����һ��ʮ������" << endl; 
	cin >> num;
	
	str = tranNum(num);
	
	cout << "��Ӧ�Ķ�������Ϊ:" << str;	
} 
#include <iostream>
using namespace std;

int leapyear(int a)
{
	if ((a%4==0&&a%100!=0)||a%400==0){
		cout<<"yes";
		}
	else{
		cout<<"no";
		}
	return 0;
}
int main(){
	int num;
	cin>>num;
	leapyear(num);
	system("pause");
	return 0;
}
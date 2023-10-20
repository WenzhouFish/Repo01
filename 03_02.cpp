#include<iostream>
using namespace std;
int main(){
    int a,b,i;   //a为输入值，b为输出值，i为位数
    cin>>a;
    b=0;
    i=0;
    do{
        b=b*10+a%10;         //利用十进制原理，b是a每次（从第二次开始去除最后一位后）取个位的倒向排列
        a=a/10;
        i=i+1;                //每去除a的一位数字，（i+1）来计算位数
    } 
    while (a>0);
    cout<<b<<endl;
    cout<<"共有"<<i<<"位";
    system("pause");
    return 0;
}
//输入一个整数，反向输出该整数，最后输出它的位数。
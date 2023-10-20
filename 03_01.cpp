#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;   //输入a和b
    if (a>b){
        cout<<a<<"大于"<<b<<endl;
    }
    else if (b>a){
        cout<<b<<"大于"<<a<<endl;
    }
    else{
        cout<<b<<"等于"<<a<<endl;
    }
    system("pause");
    return 0;
}
//输入两个整数，比较两个数的大小，输出比较结果
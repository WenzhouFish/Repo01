#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,d,root1,root2;   //����һԪ���η��̵�����ϵ����delta������ʵ��
    cin>>a>>b>>c;
    if (a==0){                    //����ԭ���
        cout<<"a����Ϊ0"<<endl;
    }
    d=b*b-4*a*c;
    if (d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        cout<<root1<<","<<root2<<endl;
    } 
    else if (d == 0){
        root1=root2=-b / (2 * a);
        cout <<root1<<endl;
    } 
    else {
        cout<<"�����޸�"<<endl;
    }
    system("pause");
    return 0;
}

//Bonus 1: ��һԪ���η��� ax�0�5 + bx + c = 0 �ĸ���
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,d,root1,root2;   //定义一元二次方程的三个系数、delta和两个实根
    cin>>a>>b>>c;
    if (a==0){                    //翻译原题干
        cout<<"a不能为0"<<endl;
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
        cout<<"方程无根"<<endl;
    }
    system("pause");
    return 0;
}

//Bonus 1: 求一元二次方程 ax² + bx + c = 0 的根。
#include<iostream>
using namespace std;
int main() {
    int n=15;
    int i = 1;
    while (i <= n/2+1) {               //i代表行数
        int j =1;
        while(j<=n/2-i+1){           //利用j来计数，输出每行头尾(n/2-i+1)个空格
            cout<<" ";
            j++;
        }
        j=1;                          //每次输出完一种字符初始化用于计数的j
        while(j<=i*2-1){             //每行有（i*2-1）个星号
            cout<<"*";
            j++;
        }
        j=1;
        while(j<=n/2-i+1){       //同上
            cout<<" ";
            j++;
        }
        cout<<endl;                   //每行输出完换行
        i++;
    }
    system("pause");
    return 0;
}
//使用 while 循环结构，用 * 号在屏幕上输出金字塔图形。
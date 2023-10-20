#include<iostream>
using namespace std;
int main() {
    int a, i;
    cin >> a;
    i = a % 7;          //翻译原题干，将输入值对7取余数
    switch(i) {
        case 0: cout << "星期日" << endl; break;
        case 1: cout << "星期一" << endl; break;
        case 2: cout << "星期二" << endl; break;
        case 3: cout << "星期三" << endl; break;
        case 4: cout << "星期四" << endl; break;
        case 5: cout << "星期五" << endl; break;
        case 6: cout << "星期六" << endl; break;
    }
    system("pause");
    return 0;
}
//输入一个正整数，计算其除以7的余数，根据余数 0-6 分别转换成“星期日/一/二/三/四/五/六”，打印输出。
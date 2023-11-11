#include<iostream>
using namespace std ;

int josephus(int n, int m) {   //定义josephus函数
    int lastPerson = 0;   // 初始化最后留下的人的索引为 0
    for (int i = 2; i <= n; ++i) {    // 开始循环，从第二个人开始报数，直到剩下最后一个人
        lastPerson = (lastPerson + m) % i;   // 计算下一个出列的人的索引
    }
    return lastPerson + 1; // 返回最后留下的人的索引，加1是因为数组索引从0开始
}

int main() {
    int a,b ;
    do {
        cin >> a >> b ;   
        if (a ==0 && b == 0) break ;  //如果读取到了最后一行，结束循环
        cout << josephus(a , b) << endl ;
    } while ( a != 0 && b != 0) ;   
    system("pause") ;
    return 0 ;
}
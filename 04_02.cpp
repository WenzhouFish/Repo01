#include<iostream>
using namespace std;

int Fibonacci(int num) {   //定义斐波那契函数
    if (num == 1)
        return 1;
    else if (num == 0)
        return 0;
    else {
        return Fibonacci(num - 1) + Fibonacci(num - 2);   //递归
    }
}

int main () {
    int n , m , l ;  //n是第一次输入的数字，也就是需要进行n次求斐波那契数
    cin >> n ;  
    l = n ;      //由于n在第一次while循环中归0了，所以再使用一个变量l再第二个while循环中输出斐波那契数
    int a[ n ] ;   //因为是一次性输入，所以定义一个整型数组来进行输入
    while ( n>0 ) {
        cin >> m ;
        a [ n-1 ] = { m } ;        //将测试数据放进数组内
        n-- ;
    }
    while ( l > 0 ) {      
        cout << Fibonacci ( a [ l-1 ]  ) << endl ;  //通过数组来调用斐波那契函数
        l-- ;
    }
    system ( "pause" ) ;
    return 0 ;
}
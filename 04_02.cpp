#include<iostream>
using namespace std;

int Fibonacci(int num) {   //����쳲���������
    if (num == 1)
        return 1;
    else if (num == 0)
        return 0;
    else {
        return Fibonacci(num - 1) + Fibonacci(num - 2);   //�ݹ�
    }
}

int main () {
    int n , m , l ;  //n�ǵ�һ����������֣�Ҳ������Ҫ����n����쳲�������
    cin >> n ;  
    l = n ;      //����n�ڵ�һ��whileѭ���й�0�ˣ�������ʹ��һ������l�ٵڶ���whileѭ�������쳲�������
    int a[ n ] ;   //��Ϊ��һ�������룬���Զ���һ��������������������
    while ( n>0 ) {
        cin >> m ;
        a [ n-1 ] = { m } ;        //���������ݷŽ�������
        n-- ;
    }
    while ( l > 0 ) {      
        cout << Fibonacci ( a [ l-1 ]  ) << endl ;  //ͨ������������쳲���������
        l-- ;
    }
    system ( "pause" ) ;
    return 0 ;
}
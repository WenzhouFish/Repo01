#include<iostream>
using namespace std ;

int josephus(int n, int m) {   //����josephus����
    int lastPerson = 0;   // ��ʼ��������µ��˵�����Ϊ 0
    for (int i = 2; i <= n; ++i) {    // ��ʼѭ�����ӵڶ����˿�ʼ������ֱ��ʣ�����һ����
        lastPerson = (lastPerson + m) % i;   // ������һ�����е��˵�����
    }
    return lastPerson + 1; // ����������µ��˵���������1����Ϊ����������0��ʼ
}

int main() {
    int a,b ;
    do {
        cin >> a >> b ;   
        if (a ==0 && b == 0) break ;  //�����ȡ�������һ�У�����ѭ��
        cout << josephus(a , b) << endl ;
    } while ( a != 0 && b != 0) ;   
    system("pause") ;
    return 0 ;
}
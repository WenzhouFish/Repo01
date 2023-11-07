#include <iostream>
using namespace std;

int n;
char A, B, C;

void hanoi(int n, char a, char b, char c) {    
    if (n == 1) {                   //��������������ʼλ���Ƶ�����λ��
        cout << n << ":" << a << "->" << c << endl;
    } 
    else {
        hanoi(n - 1, a, c, b);       //���ҵ��ã�����n-1������������ʼλ���Ƶ��м�λ��  
        cout << n << ":" << a << "->" << c << endl;
        hanoi(n - 1, b, a, c);       //���ҵ��ã�����n-1�����������м�λ���Ƶ�����λ��
    }
}

int main() {
    cin >> n >> A >> B >> C;
    hanoi(n, A, B, C);
    system("pause");
    return 0;
}
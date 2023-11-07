#include <iostream>
using namespace std;

int n;
char A, B, C;

void hanoi(int n, char a, char b, char c) {    
    if (n == 1) {                   //将最大的塔饼从起始位置移到最终位置
        cout << n << ":" << a << "->" << c << endl;
    } 
    else {
        hanoi(n - 1, a, c, b);       //自我调用，将（n-1）个塔饼从起始位置移到中间位置  
        cout << n << ":" << a << "->" << c << endl;
        hanoi(n - 1, b, a, c);       //自我调用，将（n-1）个塔饼从中间位置移到最终位置
    }
}

int main() {
    cin >> n >> A >> B >> C;
    hanoi(n, A, B, C);
    system("pause");
    return 0;
}
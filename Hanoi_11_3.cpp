#include <iostream>
using namespace std;

int n;
char A, B, C;

void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        cout << n << ":" << a << "->" << c << endl;
    } else {
        hanoi(n - 1, a, c, b);
        cout << n << ":" << a << "->" << c << endl;
        hanoi(n - 1, b, a, c);
    }
}

int main() {
    cin >> n >> A >> B >> C;
    hanoi(n, A, B, C);
    return 0;
}

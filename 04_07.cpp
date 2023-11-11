#include <iostream>
#include <vector>
using namespace std;

const int N = 8;
int count = 0;  // ����������¼��ǰ�ҵ��ķ��������Ļʺ󴮸���

// ��鵱ǰ�ʺ�İڷ��Ƿ�Ϸ�
bool isValid(const vector<int>& queens, int row, int col) {
    for (int i = 0; i < row; ++i) {
        // ����Ƿ���ͬһ�л���ͬһ�Խ���
        if (queens[i] == col || abs(queens[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// ���������ҵ����з��������Ļʺ�
void solve(vector<int>& queens, int row, int b) {
    if (row == N) {
        count++;
        // ����Ѿ��ҵ��˵�b�����������Ļʺ󴮣�ֱ�����������
        if (count == b) {
            for (int i = 0; i < N; ++i) {
                cout << queens[i] + 1;  // �����������1��ʼ
            }
            cout << endl;
            return;
        }
        return;
    }

    for (int col = 0; col < N; ++col) {
        if (isValid(queens, row, col)) {
            queens[row] = col;
            solve(queens, row + 1, b);
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        vector<int> queens(N);
        count = 0;
        solve(queens, 0, b);
    }

    return 0;
}
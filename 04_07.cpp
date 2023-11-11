#include <iostream>
#include <vector>
using namespace std;

const int N = 8;
int count = 0;  // 计数器，记录当前找到的符合条件的皇后串个数

// 检查当前皇后的摆放是否合法
bool isValid(const vector<int>& queens, int row, int col) {
    for (int i = 0; i < row; ++i) {
        // 检查是否在同一列或者同一对角线
        if (queens[i] == col || abs(queens[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// 回溯搜索找到所有符合条件的皇后串
void solve(vector<int>& queens, int row, int b) {
    if (row == N) {
        count++;
        // 如果已经找到了第b个符合条件的皇后串，直接输出并返回
        if (count == b) {
            for (int i = 0; i < N; ++i) {
                cout << queens[i] + 1;  // 输出的列数从1开始
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
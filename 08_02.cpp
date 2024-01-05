#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<int> myQueue;

    while (true) {
        string command;
        cout << "请输入命令（push、pop、print、exit）: ";
        cin >> command;

        if (command == "push") {
            int value;
            cout << "请输入要入队的值: ";
            cin >> value;
            myQueue.push_back(value);
            cout << value << " 入队成功。" << endl;
        } else if (command == "pop") {
            if (!myQueue.empty()) {
                int frontValue = myQueue.front();
                myQueue.pop_front();
                cout << frontValue << " 出队成功。" << endl;
            } else {
                cout << "队列为空，无法执行出队操作。" << endl;
            }
        } else if (command == "print") {
            cout << "队列元素: ";
            for (int value : myQueue) {
                cout << value << " ";
            }
            cout << endl;
        } else if (command == "exit") {
            break;
        } else {
            cout << "无效命令，请输入 push、pop、print 或 exit。" << endl;
        }
    }
    system("pause");
    return 0;
}
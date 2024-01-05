#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<int> myQueue;

    while (true) {
        string command;
        cout << "���������push��pop��print��exit��: ";
        cin >> command;

        if (command == "push") {
            int value;
            cout << "������Ҫ��ӵ�ֵ: ";
            cin >> value;
            myQueue.push_back(value);
            cout << value << " ��ӳɹ���" << endl;
        } else if (command == "pop") {
            if (!myQueue.empty()) {
                int frontValue = myQueue.front();
                myQueue.pop_front();
                cout << frontValue << " ���ӳɹ���" << endl;
            } else {
                cout << "����Ϊ�գ��޷�ִ�г��Ӳ�����" << endl;
            }
        } else if (command == "print") {
            cout << "����Ԫ��: ";
            for (int value : myQueue) {
                cout << value << " ";
            }
            cout << endl;
        } else if (command == "exit") {
            break;
        } else {
            cout << "��Ч��������� push��pop��print �� exit��" << endl;
        }
    }
    system("pause");
    return 0;
}
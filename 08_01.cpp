#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> mylist;

    cout << "����������������֮��ʹ��enter���и�����(�����������/��enter������������ֹ)" << endl;
    int input;

    while (cin >> input) {
        mylist.push_back(input);
    }

    if (!mylist.empty()) {
        mylist.pop_front();
        mylist.pop_back();
    }

    cout << "ʣ�������Ϊ";
    for (int value : mylist) {
        cout << value << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}

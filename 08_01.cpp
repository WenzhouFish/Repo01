#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> mylist;

    cout << "请输入整数，整数之间使用enter换行隔开，(按任意非数字/非enter键完成输入的终止)" << endl;
    int input;

    while (cin >> input) {
        mylist.push_back(input);
    }

    if (!mylist.empty()) {
        mylist.pop_front();
        mylist.pop_back();
    }

    cout << "剩余的链表为";
    for (int value : mylist) {
        cout << value << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}

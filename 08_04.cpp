#include <iostream>
#include <forward_list>

using namespace std;

template <typename T>
void filterList(forward_list<T>& myList, const T& threshold) {
    myList.remove_if([threshold](const T& value) { return value < threshold; });
}

template <typename T>
void printList(const forward_list<T>& myList) {
    for (const auto& value : myList) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    forward_list<int> myList;

    cout << "请输入一系列整数（输入非数字和非回车键结束）：" << endl;
    int input;
    while (cin >> input) {
        myList.push_front(input);
    }

    cin.clear();  
    cin.ignore(); 

    cout << "请输入阈值：" << endl;
    int threshold;
    cin >> threshold;

    filterList(myList, threshold);

    cout << "处理后的列表：";
    printList(myList);

    system("pause");
    return 0;
}

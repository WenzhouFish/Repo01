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

    cout << "������һϵ����������������ֺͷǻس�����������" << endl;
    int input;
    while (cin >> input) {
        myList.push_front(input);
    }

    cin.clear();  
    cin.ignore(); 

    cout << "��������ֵ��" << endl;
    int threshold;
    cin >> threshold;

    filterList(myList, threshold);

    cout << "�������б�";
    printList(myList);

    system("pause");
    return 0;
}

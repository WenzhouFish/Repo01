#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ȥ���ظ�Ԫ�ز�����������
void uniqueSort(vector<int>& vec) {
    sort(vec.begin(), vec.end());              // �Ƚ�������
    auto last = unique(vec.begin(), vec.end()); // ��ȥ���ظ�Ԫ��
    vec.erase(last, vec.end());                 // ɾ���ظ�Ԫ�غ�Ĳ���
}

int main() {
    vector<int> myVector;

    cout << "������һϵ��������������������ֺͻس�����������" << endl;
    int input;
    while (cin >> input) {
        myVector.push_back(input);
    }

    uniqueSort(myVector);

    cout << "������ȥ�غ��Ԫ�أ�";
    for (int value : myVector) {
        cout << value << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}

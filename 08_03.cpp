#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 去除重复元素并按升序排序
void uniqueSort(vector<int>& vec) {
    sort(vec.begin(), vec.end());              // 先进行排序
    auto last = unique(vec.begin(), vec.end()); // 再去除重复元素
    vec.erase(last, vec.end());                 // 删除重复元素后的部分
}

int main() {
    vector<int> myVector;

    cout << "请输入一系列整数（输入任意非数字和回车键结束）：" << endl;
    int input;
    while (cin >> input) {
        myVector.push_back(input);
    }

    uniqueSort(myVector);

    cout << "排序且去重后的元素：";
    for (int value : myVector) {
        cout << value << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}

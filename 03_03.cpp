#include<iostream>
using namespace std;
int main() {
    int a, i;
    cin >> a;
    i = a % 7;          //����ԭ��ɣ�������ֵ��7ȡ����
    switch(i) {
        case 0: cout << "������" << endl; break;
        case 1: cout << "����һ" << endl; break;
        case 2: cout << "���ڶ�" << endl; break;
        case 3: cout << "������" << endl; break;
        case 4: cout << "������" << endl; break;
        case 5: cout << "������" << endl; break;
        case 6: cout << "������" << endl; break;
    }
    system("pause");
    return 0;
}
//����һ�������������������7���������������� 0-6 �ֱ�ת���ɡ�������/һ/��/��/��/��/��������ӡ�����
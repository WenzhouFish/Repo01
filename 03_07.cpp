#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    while (true) {    //ʹ��while��䣬��������������ʱ����Բ���ѭ��ֱ�����������ȷΪֹ
        int cNum = rand() % 3;           //cNum�ǵ��Եĳ���
        int pNum;                        //pNum����ҵĳ���
        cout << "��������ĳ��֣�0����ʯͷ��1���������2��������";
        cin >> pNum;
        cout << "��ĳ����ǣ�";
        switch(pNum) {                   //����switch���������ĵ�ʯͷ������
            case 0: cout << "ʯͷ" << endl; break;
            case 1: cout << "����" << endl; break; 
            case 2: cout << "��" << endl; break; 
        }
        if (pNum >= 0 && pNum <= 2) {    //ͨ����ֵ�ж���Ӯ
            switch(pNum - cNum) {
                case 0: cout << "ƽ��" << endl; break;
                case 1: case -2: cout << "������" << endl; break; 
                case -1: case 2: cout << "��Ӯ��" << endl; break; 
            }
        } 
        else {                          //���������󣨲���1��2��3��ֱ��������һ��ѭ��ֱ��������ȷΪֹ
            cout << "��ҳ�����������������" << endl;
            continue;
        }
        cout << "���Գ����ǣ�";
        switch(cNum) {
            case 0: cout << "ʯͷ" << endl; break;
            case 1: cout << "����" << endl; break; 
            case 2: cout << "��" << endl; break; 
        }
        cout << "�Ƿ�����棬������������1����������0��" << endl;    //ͨ���������ж��Ƿ������
        int userInput;
        cin >> userInput;

        if (userInput == 0) {
            cout << "��Ϸ����" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
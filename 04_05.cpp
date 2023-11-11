#include<iostream>
#include<string>
using namespace std;

int scholarship(string name, int sco1, int sco2, char cad, char wes, int pap) {        //����һ���������ѧ����ѧ��ĺ���
    int sch = 0;
    if (sco1 > 80 && pap > 0) sch += 8000; 
    if (sco1 > 85 && sco2 > 80) sch += 4000;
    if (sco1 > 90) sch += 2000;
    if (sco1 > 85 && wes == 'Y') sch += 1000; 
    if (sco2 > 80 && cad =='Y') sch += 850;  
    return sch;
}

int main() {
    int N;
    int sum = 0;
    cin >> N;
    string stu[N][7];            //��һ��N*7�Ķ�ά���鴢��ÿ��ѧ������Ϣ�����е�7�����������ѧ����õĽ�ѧ��

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> stu[i][j];            //��������
        }
    }

    for (int i = 0; i < N; i++) {                   //����scholarship������ѧ��
        int sch = scholarship(stu[i][0], stoi(stu[i][1]), stoi(stu[i][2]), stu[i][3][0], stu[i][4][0], stoi(stu[i][5])); 
        stu[i][6] = to_string(sch); 
        sum += sch;
    }

    for (int j = 0; j < N-1; j++) {                //ʹ��ð�����򣬰���ÿ��ѧ������Ľ�ѧ����Ŀ��������                             
        for (int k = 0; k < N-1-j; k++) { 
            if (stoi(stu[k][6]) < stoi(stu[k+1][6])) {  
                for (int l = 0; l < 7; l++) {
                    string tmp = stu[k][l];
                    stu[k][l] = stu[k+1][l];
                    stu[k+1][l] = tmp;
                }
            }
        }
    }

    cout << stu[0][0] << endl << stu[0][6] << endl << sum << endl; 
    system("pause") ;
    return 0;
}

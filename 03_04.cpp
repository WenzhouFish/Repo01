#include<iostream>
using namespace std;
int main() {
    int n=15;
    int i = 1;
    while (i <= n/2+1) {               //i��������
        int j =1;
        while(j<=n/2-i+1){           //����j�����������ÿ��ͷβ(n/2-i+1)���ո�
            cout<<" ";
            j++;
        }
        j=1;                          //ÿ�������һ���ַ���ʼ�����ڼ�����j
        while(j<=i*2-1){             //ÿ���У�i*2-1�����Ǻ�
            cout<<"*";
            j++;
        }
        j=1;
        while(j<=n/2-i+1){       //ͬ��
            cout<<" ";
            j++;
        }
        cout<<endl;                   //ÿ������껻��
        i++;
    }
    system("pause");
    return 0;
}
//ʹ�� while ѭ���ṹ���� * ������Ļ�����������ͼ�Ρ�
#include<iostream>
using namespace std;
int main(){
    int a,b,i;   //aΪ����ֵ��bΪ���ֵ��iΪλ��
    cin>>a;
    b=0;
    i=0;
    do{
        b=b*10+a%10;         //����ʮ����ԭ��b��aÿ�Σ��ӵڶ��ο�ʼȥ�����һλ��ȡ��λ�ĵ�������
        a=a/10;
        i=i+1;                //ÿȥ��a��һλ���֣���i+1��������λ��
    } 
    while (a>0);
    cout<<b<<endl;
    cout<<"����"<<i<<"λ";
    system("pause");
    return 0;
}
//����һ���������������������������������λ����
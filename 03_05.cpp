// δ�����Ĵ��룺

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     bool pnum=false;  //����һ����������������ͬһ������������
//     int n;
//     for(n=200;n<=300;n++){   //����n����������200~300������
//         pnum = false;  //����pnum��ȷ��ÿ�����ֶ��л������
//         int i;  //����i��������������
//         for(i=2;i<=sqrt(n);i++)
//         {
//             if(n%i==0)
//             {
//                 break;
//             }
//             if (!pnum)    
//             {    
//                 cout<<n<<"Ϊ����"<<endl;
//                 pnum=true;     
//             }
//         }
// }
//     system("pause");
//     return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    for(n=200;n<=300;n++){   //����n����������200~300������
        int i;  //����i��������������
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if (i>sqrt(n))    //ֻ�е���ʱ��n���ϴ�cout������ͬʱ�Ż�ִ��
            {    
                cout<<n<<"Ϊ����"<<endl;    
            }
}
    system("pause");
    return 0;
}
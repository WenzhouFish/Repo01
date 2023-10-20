// 未修正的代码：

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     bool pnum=false;  //定义一个布尔变量，不让同一个质数多次输出
//     int n;
//     for(n=200;n<=300;n++){   //利用n来遍历所有200~300的数字
//         pnum = false;  //重置pnum，确保每个数字都有机会输出
//         int i;  //利用i来遍历所有因子
//         for(i=2;i<=sqrt(n);i++)
//         {
//             if(n%i==0)
//             {
//                 break;
//             }
//             if (!pnum)    
//             {    
//                 cout<<n<<"为质数"<<endl;
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
    for(n=200;n<=300;n++){   //利用n来遍历所有200~300的数字
        int i;  //利用i来遍历所有因子
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if (i>sqrt(n))    //只有当此时的n和上次cout的数不同时才会执行
            {    
                cout<<n<<"为质数"<<endl;    
            }
}
    system("pause");
    return 0;
}
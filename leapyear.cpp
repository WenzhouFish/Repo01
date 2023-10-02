#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int A[3]{}, a = 0, b = 0;
    for (int i = 0; i < 3; i++)                                                       //输入
    {
        cin >> A[i];
    }

    sort(A, A + 3);                                                                   //排序

    cout << "输入的年份大小顺序为：" << A[0] << " " << A[1] << " " << A[2] << endl << endl;

    for (int i = 0; i < 3; i++)                                                       //判断
    {
        if (A[i] < 0)                                                                 //判断公元前后
        {
            a = A[i] + 1;
            b -= 1;
        }
        else
        {
            a=A[i];
        }
        if (a % 100 != 0 && a % 4 == 0)                                               //非整百肯定判断
        {

            cout << A[i] << "是闰年" << endl;
            b = a + 4 + b;
            if (b % 100 == 0 && b % 400 != 0 || b == 0)                                   //二次判断
            {
                cout << A[i] << "下一个闰年是8年后, 是" << b + 4 << "年" << endl << endl;
            }
            else
            {
                cout << A[i] << "下一个闰年是4年后，是" << b << "年" << endl << endl;
            }
            b = 0;
        }
        else if (a % 100 == 0 && a % 400 == 0)                                         //整百判断
        {
            cout << A[i] << "是闰年" << endl;
            b = a + 4;
            cout << A[i] << "下一个闰年是4年后，是" << b << "年" << endl << endl;
            b = 0;
        }
        else                                                                          //否定判断
        {
            cout << A[i] << "不是闰年" << endl;
            b = (4 - a % 4) % 4;
            cout << A[i] << "下一个闰年是" << b << "年后，是" << A[i] + b << "年" << endl << endl;
            b = 0;
        }
        a = 0;
    }
    return 0;
}



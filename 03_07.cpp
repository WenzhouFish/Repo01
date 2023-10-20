#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    while (true) {    //使用while语句，当玩家输入有误的时候可以不断循环直到玩家输入正确为止
        int cNum = rand() % 3;           //cNum是电脑的出手
        int pNum;                        //pNum是玩家的出手
        cout << "请输入你的出手（0代表石头，1代表剪刀，2代表布）：";
        cin >> pNum;
        cout << "你的出手是：";
        switch(pNum) {                   //利用switch语句输出中文的石头剪刀布
            case 0: cout << "石头" << endl; break;
            case 1: cout << "剪刀" << endl; break; 
            case 2: cout << "布" << endl; break; 
        }
        if (pNum >= 0 && pNum <= 2) {    //通过差值判断输赢
            switch(pNum - cNum) {
                case 0: cout << "平手" << endl; break;
                case 1: case -2: cout << "你输了" << endl; break; 
                case -1: case 2: cout << "你赢了" << endl; break; 
            }
        } 
        else {                          //如果输入错误（不是1，2，3）直接跳入下一个循环直到输入正确为止
            cout << "玩家出手有误，请重新输入" << endl;
            continue;
        }
        cout << "电脑出手是：";
        switch(cNum) {
            case 0: cout << "石头" << endl; break;
            case 1: cout << "剪刀" << endl; break; 
            case 2: cout << "布" << endl; break; 
        }
        cout << "是否继续玩，继续玩请输入1，否则输入0：" << endl;    //通过输入来判定是否继续玩
        int userInput;
        cin >> userInput;

        if (userInput == 0) {
            cout << "游戏结束" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);//读入带空格的字符串 
    int len = s.size() ;
    for(int i = 0; i < len; ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z')//判断如果当前字符是小写字母 
            s[i] -= 32;//改为大写字母
        else if (s[i] >= 'A' && s[i] <= 'Z')//判断如果当前字符是大写字母 
            s[i] += 32;//改为小写字母
    }
    cout << s << endl;
    system("pause");
    return 0;
}
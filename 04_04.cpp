#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);//������ո���ַ��� 
    int len = s.size() ;
    for(int i = 0; i < len; ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z')//�ж������ǰ�ַ���Сд��ĸ 
            s[i] -= 32;//��Ϊ��д��ĸ
        else if (s[i] >= 'A' && s[i] <= 'Z')//�ж������ǰ�ַ��Ǵ�д��ĸ 
            s[i] += 32;//��ΪСд��ĸ
    }
    cout << s << endl;
    system("pause");
    return 0;
}
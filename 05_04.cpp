#include<iostream>
#include<string>
using namespace std ;
class Student {
public :
    Student ( string name , string classnum , int num ,int score) : Name(name),Classnum(classnum),Num(num),Score(score) {
        count ++ ;
    }
    static int count ;
    void display() {
        cout << "����" << Name << "�༶" << Classnum << "ѧ��" << Num << "�ɼ�" << Score << endl ;
        if (Score >= 90) {cout << "�ȼ�ΪA" << endl ;}
        else if (Score >= 80) {cout << "�ȼ�ΪB" << endl ;}
        else if (Score >= 60) {cout << "�ȼ�ΪC" << endl ;}
        else {cout << "�ȼ�ΪD" << endl ;}
    }
private :
    string Name,Classnum ;
    int Num,Score ;

} ;


int Student::count = 0 ;

int main() {

    Student student1("A", "ClassA", 01, 85);
    Student student2("B", "ClassB", 02, 76);
    Student student3("C", "ClassC", 03, 95);
    Student student4("D", "ClassC", 03, 95);

    student1.display();
    student2.display();
    student3.display();
    student4.display();

    cout << "�����" << Student::count << "��ѧ����ͳ��" << endl ;

    system("pause") ;
    return 0 ;
}
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
        cout << "姓名" << Name << "班级" << Classnum << "学号" << Num << "成绩" << Score << endl ;
        if (Score >= 90) {cout << "等级为A" << endl ;}
        else if (Score >= 80) {cout << "等级为B" << endl ;}
        else if (Score >= 60) {cout << "等级为C" << endl ;}
        else {cout << "等级为D" << endl ;}
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

    cout << "完成了" << Student::count << "个学生的统计" << endl ;

    system("pause") ;
    return 0 ;
}
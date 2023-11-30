#include<iostream>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double a, double b) : x(a), y(b) {}

    void display() {
        cout << "��ǰxֵΪ" << x << " yֵΪ" << y << endl;
    }

    void reset(double newx, double newy) {
        cout << "���ĵ������x��yֵ" << endl;
        x = newx;
        y = newy;
    }
};

class Rectangle : public Point {
private:
    double length, width;

public:
    Rectangle(double x, double y, double length, double width) : Point(x, y), length(length), width(width) {}

    void display() {
        Point::display();  // ���û��� Point �� display ��������ʾ������Ϣ
        cout << "��ǰ�ĳ�����Ϊ" << length << " " << width << endl;
    }

    void area() {
        cout << "���Ϊ" << length * width << endl;
    }

    void perimeter() {
        cout << "�ܳ�Ϊ" << 2 * (length + width) << endl;
    }
};

int main() {
    double x, y, length, width, newx, newy;

    cout << "������xyֵ: ";
    cin >> x >> y;

    cout << "�����볤�Ϳ�: ";
    cin >> length >> width;

    Point point(x, y);
    Rectangle rectangle(x, y, length, width);

    point.display();

    cout << "�������µ�xyֵ: ";
    cin >> newx >> newy;

    point.reset(newx, newy);
    point.display();

    rectangle.display();
    rectangle.area();
    rectangle.perimeter();

    system("pause") ;
    return 0;
}
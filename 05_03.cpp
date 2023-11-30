#include<iostream>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double a, double b) : x(a), y(b) {}

    void display() {
        cout << "当前x值为" << x << " y值为" << y << endl;
    }

    void reset(double newx, double newy) {
        cout << "更改点坐标的x、y值" << endl;
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
        Point::display();  // 调用基类 Point 的 display 函数来显示坐标信息
        cout << "当前的长、宽为" << length << " " << width << endl;
    }

    void area() {
        cout << "面积为" << length * width << endl;
    }

    void perimeter() {
        cout << "周长为" << 2 * (length + width) << endl;
    }
};

int main() {
    double x, y, length, width, newx, newy;

    cout << "请输入xy值: ";
    cin >> x >> y;

    cout << "请输入长和宽: ";
    cin >> length >> width;

    Point point(x, y);
    Rectangle rectangle(x, y, length, width);

    point.display();

    cout << "请输入新的xy值: ";
    cin >> newx >> newy;

    point.reset(newx, newy);
    point.display();

    rectangle.display();
    rectangle.area();
    rectangle.perimeter();

    system("pause") ;
    return 0;
}
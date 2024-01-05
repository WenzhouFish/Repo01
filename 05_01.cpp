#include<iostream>
using namespace std ;
const double pi = 3.1415926 ;
class Circle {
public :
    double area ( double rad) {
        return pi*rad*rad ;
    }
    double  circum ( double rad ) {
        return 2*pi*rad ;
    }

private :
    int rad ;
} ;

int main () {
    double rad ;
    Circle myCircle ;
    cin >> rad ;
    cout << myCircle.area (rad) << endl ;
    cout << myCircle.circum (rad) << endl ;
    system("pause") ;
    return 0 ;
}
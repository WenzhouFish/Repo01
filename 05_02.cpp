#include<iostream>
using namespace std ;
class Triangle {
private :
    double a,b,c ;
public :
    Triangle (double s1,double s2,double s3) : a(s1) , b(s2) , c(s3) {} ;
    void judge ( ) {
                if ( a+b <= c || a+c <= b || b+c <= a ) {
                    cout <<"该三角形不存在" << endl ;
                }
                else if ( a == b && b == c ) {
                    cout << "该三角形为等边三角形" << endl ;
                }
                else if ( a == b || b == c || a == c ) {
                    cout << "该三角形为等腰三角形" << endl ;
                }
                else {
                    cout << "该三角形为不等边三角形" << endl ;
                }
    }
} ;

int main() {
    double side1,side2,side3 ;
    cin >> side1 >> side2 >> side3 ;
    Triangle Trian1( side1 , side2 , side3 ) ;
    Trian1.judge() ;
    system( "pause" ) ;
    return 0 ;
}
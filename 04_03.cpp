#include<iostream>
#include<cmath>
using namespace std ;
int main() {
    double n=0 ;
    long double a,b ;
    cin >> a >> b ;
    while (n <= 20) {  //根据条件n不大于20
        if ( pow(a,n) <= b && (pow(a,(n+1))) > b ) cout << n << endl ;
        n++;
    } 
    system("pause") ;
    return 0 ;
}
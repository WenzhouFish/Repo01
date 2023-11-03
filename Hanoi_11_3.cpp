#include<iostream>
using namespace std ;
void hannoi(int n,char A,char B,char C) {
	if ( n == 1 ) {
		cout << n << ":" << A << "->" << C << endl;  
	}
	else {
		hannoi ( n-1 , A , C , B ) ;  
		cout << n << ":" << A << "->" << C << endl; 
		hannoi ( n-1 , B , A , C ) ; 
	}
} 
int main () {
    int n ;
    cin >> n ;
    cout << endl ;
    hannoi ( n , 'A' , 'B' , 'C' ) ;
	system ( "pause" ) ;
    return 0 ;
}
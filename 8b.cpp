/* SAIF ALI KHAN
   21i-0649
*/   
#include <iostream>

using namespace std;


int main(){


	int test_row=6;
	int test_row2=12;
	for ( int rows=0; rows<6 ; rows++ ){ // prints total rows
	
	
		for ( int i=test_row;i>0;i--){ // prints left triangle of '*'
			cout << "*";
		}
		for ( int b=0; b<=rows;b++ ){ // prints left triange shaped spaces
			cout << " ";
		}
		for ( int c=test_row2;c>0;c-- ){ // prints / triangle of middle shape
			cout << "/";
		}
		for ( int d=rows*2;d>0;d--){ // prints / triangle of middle shape
			cout << "\\";
		}
		for ( int e=0; e<=rows;e++ ){ // prints left triange shaped spaces
			cout << " ";
		}
		for ( int j=test_row;j>0;j--){ // prints left triangle of '*'
			cout << "*";
		}
		
	test_row--;
	test_row2 = test_row2-2;
	cout << endl;
		
	}
	for (int k=0;k<7;k++){ // these for loops print the last row of shape
		cout << " ";
	}
	for (int l=0;l<12;l++){
		cout << "\\";
	}
	for (int m=0;m<7;m++){
		cout << " "; 
		}
	cout << endl;	
return 0;
}

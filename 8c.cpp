/* SAIF ALI KHAN
   21i-0649
*/   
#include <iostream>

using namespace std;

void printtop();
void printbottom();

int main(){

	printtop(); // call to print upper pattern
	printbottom(); // call to print lower pattern
	
return 0;
}

void printtop(){
	int space=16;
	

	for ( int leftrow=1;leftrow<=9;leftrow++ ){ //  upper triangle shape
	
		for (int test_space=space;test_space>=0;test_space--){ // prints spaces
		cout << " ";
		}
		space=space-2;
		
		for ( int column=1;column<=leftrow;column++ ){ // left triangle
		
		cout << column;
		cout << " ";
		
		}
		for ( int test=leftrow-1;test>=1;test-- ){ // right triangle
		cout << test;
		cout << " ";
		}
		cout << endl;
	}

}

void printbottom(){ // prints bottom triangle
	int test_space = 3; // spaces before first line is 3
	int column = 8;
	for ( int row=1;row<=8;row++){ // outer loop for rows

	for (int space=1;space<=test_space;space++){ // prints spaces
		cout << " ";
		}
		test_space=test_space+2;
	for ( int num=1;num<=column;num++ ){ // prints numbers 
		cout << num;
		cout <<  " " ;	
		}
	column = column-1;	
	cout << endl;		
	}

}

/* SAIF ALI KHAN
   21i-0649
*/   


#include <iostream>

using namespace std;

int main (){
	int total_rows = 6;
	int current_row = 1;
	int test_row;
	int i = 2;
	int i1=2;
	int m = 9;
	int m1 = 9;
	int a = 0;
	while (a<22){ // prints 1st line
	cout << "!";
	a++;
	}
	
	
	cout << endl;
	while ( current_row <= total_rows ) { //  outer loop for total rows
		int j = 1;
		if (current_row<=5){
			while (j <= i){
			cout << "\\";  // prints left (\) triangle in shape
		
			++j;	
    		}
    		int test=m;
    		while ( test>0 ){ //  prints ! (lower left triangle) 
    		cout << "!";
    		test--;
    		}
    		m=m-2;
    		int test1=m1;
    		while ( test1>0 ){ // prints ! (lower right triangle)
    		cout << "!";
    		test1--;
    		}
    		m1=m1-2;
    		int j1=1;
    		
    		if (current_row<=5){ // prints right (/) triangle in shape
    		while ( j1<=i1 ){
    			cout << "/";
    			j1++;
    			}
    		}
    		
    		
    		
    		cout << endl;
		
    		if ( i <= 8)
    			i=i+2;
    		if ( i1 <= 8 )
    			i1=i1+2;	
    			}	
    	++current_row;	
	}

return 0;
}

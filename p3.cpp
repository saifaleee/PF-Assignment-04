
/* SAIF ALI KHAN
   21i-0649
*/   
#include <iostream>
using namespace std;

int prime (int);
int main (){

	int range;
	int x=1;
	
	cout << "Enter a number (Range) : ";
	cin >> range;
	cout << "Perfect numbers till " << range << " are :" << endl;
	while ( x<=range ){ // loop will iterate till range 
		int sum=prime(x);
		if (sum==x) // checking if sum of factors is equal to the number
		cout << x << " (Perfect)" << endl;
	x++;
	}


}

int prime(int x){
 int sum1=0;// redeclaring sum after a number is checked if its perfect or not
		
for (int i=1;i<x;i++){ // a loop for calculating factors
		
		if ((x%i)==0) // adding factors to sum only
			sum1 += i;
		
		}
	return (sum1);
}

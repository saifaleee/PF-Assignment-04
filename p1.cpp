/* SAIF ALI KHAN
   21i-0649
*/   

#include <iostream>
#include <cmath> // library used for test function
using namespace std;
double calcTerm(double,double);
void testFunction(double);
double sumTerms(double);

double cos1;
double angle;
int total_terms = 0;
double factorial = 1,  power =1, sign =1;
double temp = 0;
double result = 0 ;
double test=0;

int main (){
	
	double nth;
	cout << "Enter Your angle in Radians" << endl;
	cin >> angle;
	cos1 = angle; // using cos1 variable in test function
	cout << "Enter the nth term you want to approximate to" << endl;
	cin >> nth;
	cout << endl;
	
	test = sumTerms(calcTerm(angle,temp));
	cout << "Approximated Value of Cos is : " << test << endl;
	testFunction(angle);
	
return 0;	
}


double calcTerm( double x, double term_number ){
	term_number=term_number+1;
	sign = sign* -1; // alternating signs in the series
	power = power*x*x  ;
	factorial = factorial*(2*term_number-1) * (2*term_number);
	result = sign* (power/factorial);
	temp = temp+result;
	return (result);
}

double sumTerms( double nextTerm ) {

	double total_sum=1;
	for(int a=0;a<=total_terms;a++)
	{
		total_sum += nextTerm;
	}
	return  (total_sum);
}

void testFunction(double ang){


	double Real_value = cos(ang);
	cout << "Real Value of Cos is : " << Real_value << endl;
	double error = Real_value - test;
	cout << "Error in approximated value is :" <<  error << endl;

}


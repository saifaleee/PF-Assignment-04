/* SAIF ALI KHAN
   21i-0649
*/   
#include <iostream>
#include <cmath>
using namespace std;

void binary(int);
void octal(int);
void hexa(int num);

int main(){

	int num;
	cout << "Enter A Number (Range = 1-256)" << endl;
	cin >> num;
	while (!((num >= 1) && (num <= 256))){ // input validation loop
	cout << "Please Enter a number in the given Range " << endl;
	cin >> num;
	}

	cout << "Binary Equivalent of number is : ";
	binary(num); // call to function
	cout << "Octal Equivalent of number is : ";
	octal(num); // call to function
	cout << "HexaDecimal Equivalent of number is : ";
	hexa(num); // call to function
}
void binary(int num){
	int remainder;
	int binary;
	int digit=1;
	while (num>0){
		remainder=num%2;
		binary +=  (remainder*digit);
		digit*=10;
		num = num/2;
	} 
	cout << binary;
	cout << endl;
}
void octal(int num){
	int remainder1;
	int octal;
	int digit1=1;
	int number=num;
	while (number>0){
		remainder1=number%8;
		octal +=  (remainder1*digit1);
		digit1*=10;
		number = number/8;
	} 
	cout << octal;
	cout << endl;
}
void hexa(int num){
	int remainder2;
	int hexa=0;
	int digit2=1;
	int number1=num;
	while (number1>0){
		remainder2=number1%16;
		if (remainder2==10){
			cout << "A";
			number1 = number1/16;
			break;
		}
		else if (remainder2==11){
			cout << "B";
			number1 = number1/16;
			break;
		}
		else if (remainder2==12){
			cout << "C";
			number1 = number1/16;
			break;
		}
		else if (remainder2==13){
			cout << "D";
			number1 = number1/16;
			break;
		}
		else if (remainder2==14){
			cout << "E";
			number1 = number1/16;
			break;
		}
		else if (remainder2==15){
			cout << "F";
			number1 = number1/16;
		}
		else {
		hexa +=  (remainder2*digit2);
		digit2*=10;
		number1 = number1/16;
		}
	} 
	cout << hexa;
	cout << endl;
}

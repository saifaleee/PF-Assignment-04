/* SAIF ALI KHAN
   21i-0649
*/   

#include <iostream>
#include <string>

using namespace std;

int add(int,int);
int sub(int,int);
int divi(int,int);
int multi(int,int);
int square(int);
int power(int,int);
int main(){
	
	string operation;
	cout << "Which Operation would you like to perform" << endl;
	cout << "add" << endl << "subtract" << endl << "division" << endl << "multiplication" << endl << "square" << endl << "power" << endl;
	cin >> operation;
	if (operation=="add"){
	
		cout << "Please Enter 2 numbers to add" << endl ;
		int firstnum,secondnum;
		cin >> firstnum;
		cin >> secondnum;
		int sum = add(firstnum,secondnum);
		cout << "Addition of 2 numbers is : " << sum << endl;
	
	}
	else if (operation=="subtract"){
	
		cout << "Please Enter 2 numbers to subtract" << endl ;
		int firstnum,secondnum;
		cin >> firstnum;
		cin >> secondnum;
		int sum = sub(firstnum,secondnum);
		cout << "Subtraction of 2 numbers is : " << sum << endl;
	
	}
	else if (operation=="division"){
	
		cout << "Please Enter 2 numbers to Divide" << endl ;
		int firstnum,secondnum;
		cin >> firstnum;
		cin >> secondnum;
		int sum = divi(firstnum,secondnum);
		cout << "Division of 2 numbers is : " << sum << endl;
	
	}
	else if (operation=="multiplication"){
	
		cout << "Please Enter 2 numbers to multiply" << endl ;
		int firstnum,secondnum;
		cin >> firstnum;
		cin >> secondnum;
		int sum = multi(firstnum,secondnum);
		cout << "Multiplication of 2 numbers is : " << sum << endl;
	
	}
	else if (operation=="square"){
	
		cout << "Please Enter a number to square it" << endl ;
		int firstnum;
		cin >> firstnum;
		int sum = square(firstnum);
		cout << "square of number is : " << sum << endl;
	
	}
	else if (operation=="power"){
	
		cout << "Please Enter a number and its power" << endl ;
		int firstnum,secondnum;
		cin >> firstnum;
		cin >> secondnum;;
		int sum = power(firstnum,secondnum);
		cout << "power of number is : " << sum << endl;
	
	}
}

int add(int num1,int num2 ){

	int temp;
	temp = num1^num2; // taking exclusive OR btw 2 numbers
	int carry_num = (num1&num2)<<1; // left shift carry num
	int total = (carry_num^temp); // taking exclusive OR again (with the binary number of the first 2 i.e temp)
	return (total);

}
int sub(int num1,int num2){
	
	while (!(num2==0)) // repeating this loop till no carry number is left
	{
		int temp = ~num1 & num2; // storing borrwed bit
		num1 = num1^num2; // exclusive XOR
		num2=temp << 1; // shifting 1 bit left for corrent answer
	}
	return num1;

}
int divi(int dividend ,int divisor){
	int test =1;

	int result=0;

	while (divisor<=dividend){
		divisor = divisor << 1;
		test = test << 1;
	}
	while (test>1){
		divisor = divisor>>1;
		test= test >> 1;
		if (dividend>=divisor){
			dividend = dividend-divisor;
			result =add(result,test); // call to add function
		}
	}
	return (result);
}
int multi(int num1,int num2){

	int temp = 0;
	while (num2>0){ // run loop till there is no carry
		if (num2&1){ // checking if num2 is odd or not
			temp = add(temp,num1);//call to add function
		}
		num1=num1<<1; // left shifting (multiplying num1 by 2 for each loop)
		num2=num2>>1; // right shifting (dividing num2 by 2)
	}
	return(temp);
}
int square(int num1){ // same as multi function except we multiply num with with num itself
	int num2=num1;
	int temp = 0;
	while (!(num2==0)){ // run loop till there is no carry
		if (num2&01){ // checking if num2 is odd or not
			temp = add(temp,num1);//call to add function
		}
		num1=num1<<1; // left shifting (multiplying num1 by 2 for each loop)
		num2=num2>>1; // right shifting (dividing num2 by 2)
	}
	return(temp);
}
int power(int num1,int p){ // call multi function
	int result=0;
	int temp=1;
	for (int i=1;i<=p;i++){
			temp=multi(temp,num1);
	}
	return(temp);
}

/* SAIF ALI KHAN
   21i-0649
*/   
#include<iostream>
#include<cmath>

using namespace std;

int funcvalue(int,int); // prototype

int main(){
    int x,n;
    cout << "Enter Max Value for Plotting" << endl;
    cin >> x;
    cout << "Enter Positive integer Value " << endl;
    cin >> n;
    while (n<0){
        cout << "Invalid Input, Enter  Value again" << endl;
        cin >> n;
    }
    cout << endl;
    int y_range;
    y_range = funcvalue(x,n); // storing value for y axis

    for (int i=y_range;i>=0;i=i-2){ // outer loop for that prints rows

        cout << i;
        if (i>=10){
        cout << " "; // printing a single space if value on y axis is a two digit
        }
        else 
        cout << "  "; // priting a single space if value on y axis is a single digit
        for (int j=0;j<=x;j++){
            int temp;
            temp = funcvalue(j,n); // storing functional values
            if (i==temp){ // cheking if x axis number is equal to the functional value on y axis
                cout << "*";
            }
            else 
            cout << " "; // printing empty spaces if they arnt equal
        }
        cout << endl;
    }
    cout << "   "; // 2 spaces printed at the bottom before x axis
    for (int k=0;k<=x;k++){ // printing x axis numbers
        cout << k;
    }
    cout << endl;
    return 0;
}

int funcvalue(int x,int n){ // function that calculates the value of the given expression

    int fvalue;
    fvalue = pow(x,n) + pow(x,n-1);
    return (fvalue);

}

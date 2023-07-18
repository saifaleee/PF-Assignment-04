/* SAIF ALI KHAN
   21i-0649
*/   
#include <iostream>
using namespace std;

void triangle();
void supportline();
void topbody();
void lowerbody();
void dot(int);



int main()
{
    triangle();
    supportline();
    topbody();
    supportline();
    lowerbody();
    supportline();
    triangle();

   return 0; 
}

void triangle()
{
    int height = 5;
    int stars=2;
    int sideLength = 5;
    for (int rows = 1; rows <= height; rows++) 
    {
        for (int b = 1; b <= 5 - rows + 5; b++) // prints left spaces
            cout<<' ';
        for (int c = 1; c <= rows; c++)      //Left triangle
            cout<<'/';
        for (int d = 1; d <= 2; d++)        // prints Stars
            cout<<'*';
        for (int e = 1; e <= rows; e++)     //Right triangle
            cout<<'\\';
        for (int f = 1; f <= 5 - rows + 5; f++)       //prints right spaces
            cout<<' ';
        cout<<'\n';
    }
}

void supportline()
{
    for (int spaces=0;spaces<4;spaces++){ // prints left spaces
        cout << " ";
    }

    cout<<"+"; // starting plus sign
    for (int a = 0; a < 6; a++)
    {
        cout<<"-="; // prints -= 6 times
    }
    cout<<"+"<<endl; // ending + sign
}

void topbody() {
    char forwardSlash = '/';
    char backslash = '\\';
    for(int row = 0; row <= 2; row++) // upper body of upper shape (prints 3 rows)
    {
        for (int spaces=0;spaces<4;spaces++){ // prints left spaces
        cout << " ";
        }
        cout<<"|";
        for(int inside_body = 0; inside_body < 2; inside_body++) { // loop runs 2 times because there are 2 same shapes
            dot(2 - row); // call to dot function
            for(int i = 0; i <= row; i++) {
                cout<< forwardSlash << backslash; // prints /\ shape
            }
            dot(2 - row);
        }
        cout<<"|"<<endl;
    }
    for(int row = 2; row >= 0; row--)  // printing upside down shape
    {
        for (int spaces=0;spaces<4;spaces++){ // prints left spaces
        cout << " ";
        }
        cout<<"|";
        for(int inside_body = 0; inside_body < 2; inside_body++) {
            dot(2 - row);
            for(int i = row; i <= row * 2; i++) {
                cout<< backslash << forwardSlash; //prints \/ shape
            }
            dot(2 - row);
        }

        cout<<"|"<<endl;
    }
}

void lowerbody() 
{
    char forwardSlash = '/';
    char backslash = '\\';
    for(int row = 2; row >= 0; row--)  // printing upside down shape
    {
        for (int spaces=0;spaces<4;spaces++){ // prints left spaces
        cout << " ";
        }
        cout<<"|";
        for(int inside_body = 0; inside_body < 2; inside_body++) {
            dot(2 - row);
            for(int i = row; i <= row * 2; i++) {
                cout<< backslash << forwardSlash; //prints \/ shape
            }
            dot(2 - row);
        }

        cout<<"|"<<endl;
    }

    for(int row = 0; row <= 2; row++) // upper body of upper shape (prints 3 rows)
    {
        for (int spaces=0;spaces<4;spaces++){ // prints left spaces
        cout << " ";
        }
        cout<<"|";
        for(int inside_body = 0; inside_body < 2; inside_body++) { // loop runs 2 times because there are 2 same shapes
            dot(2 - row); // call to dot function
            for(int i = 0; i <= row; i++) {
                cout<< forwardSlash << backslash; // prints /\ shape
            }
            dot(2 - row);
        }
        cout<<"|"<<endl;
    }
}

void dot(int counter) {
    for(int i = 0; i < counter; i++) {
        cout<<".";
    }
}





/* SAIF ALI KHAN
   21i-0649
*/   

#include <iostream>
#include <cmath>
using namespace std;

void simulation(double);
void graph(double , double ,double);



int main(){
double v;
double s;
double total=0;
cout << "Enter Velocity (In m/s)" << endl;
cin >> v;

simulation(v);
return 0;
}

void simulation(double vel){
    const double t = 0.01;
    int vi=vel;
int time =1;
    const double g = 9.8;
     double s=0;
     double test_s=0;
     cout << "EquationValue " << "\t" << "Simulation Value (Every new row shows the value after 1sec)" << endl; 
     
    while (test_s>=0){ 
    test_s = (vi*time)-(0.5*g*time*time); // equation value
    if (test_s<0){
    break;
    }
    for (int i=1;i<=100;i++){ // simulation values
    	s+=vel*t;
        vel = vel-g*t;
    }
    time = time+1;
   cout << test_s << "\t \t" << s << endl;
   }
}




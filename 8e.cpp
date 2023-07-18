/* SAIF ALI KHAN
   21i-0649
*/   
#include <iostream>


using namespace std;

void floor();
void endfloor();

int main()
{
	
	floor();
	endfloor();
	
return 0;
}

void floor (){
	int totalspace=25;
	int insidespace=5;
	int insidespace2=5;
	int total_stars=7;
	int counter=0;
	for (int row=0;row<5;row++){
		
		for (int a=0;a<=0;a++){

			for (int spaces=0;spaces<totalspace;spaces++){
				cout << " ";
			}
			for (int stars=0;stars<total_stars;stars++){
				cout << "*";
			}
			
			if (counter >0){
				for (int space=0;space<insidespace2;space++){
				cout << " ";
				}	
				cout << "*";
				
			}
			cout << endl;
		
		}
		for (int j=0;j<2;j++){
			for (int spaces=0;spaces<totalspace;spaces++){
				cout << " ";
			}
			cout << "*";
			for (int space=0;space<insidespace;space++){
			cout << " ";
			}	
			cout << "*";
			cout << endl;
			
		}
		totalspace=totalspace-5;
		insidespace=insidespace+5;
		counter++;
		if (counter==1){
			total_stars-=1;
		}
		if (counter>1){
			insidespace2+=5;
		}
	}

}
void endfloor(){

	for (int a=0;a<32;a++){
		cout << "*";
	}
	cout << endl;
}

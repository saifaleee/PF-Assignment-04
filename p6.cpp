/* SAIF ALI KHAN
   21i-0649
*/   
#include <iostream>

using namespace std;

int main(){


	int floor;
	double rooms = 0,occupied =0;
	double un_occupied;
	double perc;
	cout << "How many Floors does the Hotel Have" << endl;
	cin >> floor;
	while (!(floor >= 1)){ // input validation loop
	cout << "Please Enter a valid number again" << endl;
	cin >> floor;
	}
	
	
	for (int i=1;i<=floor;i++){
		
		int floor_rooms = 0, floor_occupied;
		cout << "How many rooms are there on the " << i << " floor" << endl;
		cin >> floor_rooms;
			while (!(floor_rooms >= 10))
			{ // input validation loop
			cout << "Please Enter a valid number again" << endl;
			cin >> floor_rooms;
			}
		rooms += floor_rooms; // adding number of rooms on each floor to total number of rooms
		cout << "How many rooms are occupied" << endl;
		cin >> floor_occupied ;
		occupied += floor_occupied; // adding number of occupied rooms on each floor to total number of occupied rooms
	
	}
	
	cout << "Total Number of Rooms : " << rooms << endl ;
	cout << "Total Number of Rooms Occupied : " << occupied << endl;
	un_occupied = rooms - occupied; // calculating un occupied rooms
	cout << "Total Number of Rooms Unoccupied : " << un_occupied << endl;
	perc = (occupied/rooms)*100; // // calculating percentage
	cout << "Percentage of Rooms Occupied : " << perc << "%" << endl;
	
return 0;
}

/* Programmer   	: Hakeem Buchanan
 * File Name   		: Menu.cpp
 * Course     		: Computational Problem Solving II - CPET
 * Date Created 	: 11/19/2017
*/

#include <iostream>
#include <string>
#include "Reservation.h"
#include "Dispatch.h"
#include "Driver_sys.h"
using namespace std;



int main(){
	int Menu_Options;
	char Reserve_Code;
	bool Quit=false; // Quit is currently false
   Driver_SYS(); // calls Driver_SYS function from Driver_sys header file
   do {
	cout<<"\nHello Dispatch Officer, Please input the function you would like to perform from the menu list."<<endl;
	cout<<"\nMain Menu\n";
	cout<<"1- Create Reservation\n";
	cout<<"2- Delete Reservation(Must have Reservation Code)\n";
	cout<<"3- Search for Reservation(Must haver Reservation Code)\n ";
	cout<<"4- Display All Time-Slots\n";
	cout<<"5- Summary of all driver information and then quit the application\n";
	cin>>Menu_Options; // input value of 1 to 5 to access menu options

	switch(Menu_Options){
	case 1: // Create Reservation case
		create(); // calls for create function in the Dispatch header file
		break;

	case 2: // Delete Reservation case
		cout<<"\nDo you have a Reservation Code? Y/N?\n";
		cin>>Reserve_Code;
		if(Reserve_Code=='n'||Reserve_Code=='N')
		{
			cout<<"Please get a Reserve Code before continuing."<<endl;
		}

		break;

	case 3: // Search for Reservation case
		cout<<"\nDo you have a Reservation Code? Y/N?\n";
		cin>>Reserve_Code;
		if(Reserve_Code=='n'||Reserve_Code=='N')
		{
			cout<<"Please get a Reserve Code before continuing."<<endl;
		}
		break;

	case 4: // Display case
		display();
		break;

	case 5: // Summary and end case
		cout << "\nThis is a summary of all the drivers information. ";
		display(); // calls for display function in the Dispatch header file
		cout<<"\n\nThank you goodbye."<<endl;
		Quit=true; // Quit is now true
		break;

	}
   }while(Quit==false); // do while condition of Quit is false, end when Quit is true

   return 0;
}

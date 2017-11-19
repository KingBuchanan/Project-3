/* Programmer   	: Hakeem Buchanan
 * File Name   		:Reservation_Display
 * Course     		: Computational Problem Solving II - CPET
 * Date Created 	: 11/8/2017
*/
#include <string>
#include <iostream>
#ifndef MainMenu
#define MainMenu
using namespace std;
struct Driver{
		string DName;
		int startDriver;
		int endDriver;
		char DriverVehicle;
		char ID;
		int *available[19];
		int position;
		int max_value_ptr=*available[19];
		int max_value;
		int reservationNum;
	};

int mainMenu(){
	int Menu_Options;
	char Reserve_Code;

	cout<<"Hello Dispatch Officer, Please input the function you would like to perform from the menu list."<<endl;
	cout<<"\nMain Menu\n";
	cout<<"1- Create Reservation\n";
	cout<<"2- Delete Reservation(Must have Reservation Code)\n";
	cout<<"3- Search for Reservation(Must haver Reservation Code)\n ";
	cout<<"4  Display All Time-Slots";
	cout<<"5- Quit application";
	cin>>Menu_Options;


	switch(Menu_Options){
	case 1:
		create();
		break;
	case 2:
		cout<<"Do you have a Reservation Code? Y/N?\n";
		cin>>Reserve_Code;
		if(Reserve_Code=='n'||Reserve_Code=='N'){
			cout<<"Please get a Reserve Code before continuing."<<endl;
			mainMenu();
		}

		break;
	case 3:
		cout<<"Do you have a Reservation Code? Y/N?\n";
		cin>>Reserve_Code;
		if(Reserve_Code=='n'||Reserve_Code=='N'){
					cout<<"Please get a Reserve Code before continuing."<<endl;
					mainMenu();
				}
		break;
	case 4:
		break;
	case 5:
		break;

	}



return 0;
}

#endif

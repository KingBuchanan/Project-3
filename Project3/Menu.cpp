/*
 * Main.cpp
 *
 *  Created on: Nov 19, 2017
 *      Author: hakee
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

    Driver_SYS();
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
			main();
		}

		break;
	case 3:
		cout<<"Do you have a Reservation Code? Y/N?\n";
		cin>>Reserve_Code;
		if(Reserve_Code=='n'||Reserve_Code=='N'){
					cout<<"Please get a Reserve Code before continuing."<<endl;
					main();
				}
		break;
	case 4:
		break;
	case 5:
		break;

	}



return 0;
}



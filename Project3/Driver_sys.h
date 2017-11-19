
/* Programmer   	: Sean Wong
 * File Name   		: Driver_sys_Do_While.cpp
 * Course     		: Computational Problem Solving II - CPET
 * Date Created 	: 11/8/2017
 */
#ifndef Driver
#define Driver
#include "Reservation.h"
#include <iostream>
#include <string>
using namespace std;
int Driver_SYS()
{

	string Name;
	int DriverRequest; 
	int startHour;
	int startMin;
	int endHour;
	int endMin;
	int startTime;
	int endTime;
	int DriverNum=0;
	char vehicle;
	char ID;
	int max_val;
	int position;
	int position2;

	cout << "Enter Number of Drivers for the day." << endl;
	cin >> DriverRequest;

	if (DriverRequest > 5)
	{
		cout<<"Enter a number less than 5. Restarting registration." << endl;
		Driver_SYS();
	}
	if (DriverRequest==0)
	{
		cout<<"Enter a number more than 0. Restarting registration." << endl;
		Driver_SYS();

	}
	if (DriverRequest < 0)
	{
		cout<<"Enter a number less than 5. Restarting registration." << endl;
		Driver_SYS();
	}

	do{
		cout << "Hello, welcome to the shuttle driver registration system.\n"
				<< "The shuttle service runs daily from 8:00am (0800) to 5:00pm (1700).\n"
				<< "Please fill out the following registration information.\n" << endl;

		cout << "Enter your name: " << endl;
		cin >> Name;

		cout << "Enter the hour you want to start working.\n"
				<< "[Enter in Military Time (i.e. 10:00am  for 1000 and 4pm for 1600)]: " << endl;
		cin >> startHour;
		cout << startHour << endl;


		if (startHour < 800) // Prevents user from inputting time before 8am
		{
			cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
			Driver_SYS();
		}

		else if ((startHour%10) != 0) // prevents user from inputting values not on the hour
		{
			cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
			Driver_SYS();
		}

		else if (startHour > 1700) // prevents user from inputting time after 5pm
		{
			cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
			Driver_SYS();
		}

		cout << "Enter the 30 minute block you want to start working.\n"
				<< "[Enter in Military Time (i.e. 00 for at the hour and 30 for at that half-hour block: " << endl;
		cin >> startMin;
		cout << startMin << endl;

		if (startMin != 00)
		{
			if (startMin!=30)
			{
				cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
				Driver_SYS();
			}
		}

		startTime = startHour + startMin; // Time starting (hour and 30 minute block)

		cout << "Enter time you want to stop working.\n"
				<< "i.e. 10:00am  for 1000 and 4pm for 1600: " << endl;
		cin >> endHour;

		if (endHour < startTime)
		{
			cout << "\nThis is not a suitable time to end work as the entered hour you want to stop working is "
					<<	"\nbefore your entry for when you want to start working. Restarting registration.\n " << endl;
			Driver_SYS();
		}
		else if (endHour < 800)
		{
			cout << "\nThis is not a suitable time to end work. Restarting registration.\n " << endl;
			Driver_SYS();
		}
		else if ((endHour%10) != 0) // prevents user from inputting values not on the hour
		{
			cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
			Driver_SYS();
		}
		else if (endHour > 1700)
		{
			cout << "\nThis is not a suitable time to end work. Restarting registration.\n " << endl;
			Driver_SYS();
		}

		cout << "Enter the 30 minute block you want to stop working.\n"
				<< "i.e. 00 for at the hour and 30 for at that half-hour block: " << endl;
		cin >> endMin;
		cout << endMin << endl;

		if (endMin != 00)
		{
			if (endMin!=30)
			{
				cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
				Driver_SYS();
			}
		}

		endTime = endHour + endMin;
		if (endTime > 1700)
		{
			cout << "\nThe time you entered for when you want to stop working is not suitable. Restarting registration.\n " << endl;
			Driver_SYS();
		}

		cout << "Please input the type of vehicle you would like to use.\n"
				<< "Input 'm' or 'M' for the Motorcycle.\n"
				<< "Input 'c' or 'C' for the Car.\n"
				<< "Input 'v' or 'V' for the Van.\n" << endl;
		cin >> vehicle;
		switch(vehicle)
		{
		case ('m'):
		case ('M'):
		cout << "You chose to use the Motorcycle. " << endl;
		max_val=1;
		break;

		case ('c'):
		case ('C'):
		cout << "You chose to use the Car. " << endl;
		max_val=2;
		break;

		case ('v'):
		case ('V'):
		cout << "You chose to use the Van. " << endl;
		max_val=4;
		break;

		default:
			cout << "You have chosen a vehicle that is not suitable. Restarting registration.\n" << endl;
			Driver_SYS();
		}

		//				cout << ID;

		//Display
		switch(startTime)
		{
		case 800:
			position=0;
			break;
		case 830:
			position=1;
			break;
		case 900:
			position=2;
			break;
		case 930:
			position=3;
			break;
		case 1000:
			position=4;
			break;
		case 1030:
			position=5;
			break;
		case 1100:
			position=6;
			break;
		case 1130:
			position=7;
			break;
		case 1200:
			position=8;
			break;
		case 1230:
			position=9;
			break;
		case 1300:
			position=10;
			break;
		case 1330:
			position=11;
			break;
		case 1400:
			position=12;
			break;
		case 1430:
			position=13;
			break;
		case 1500:
			position=14;
			break;
		case 1530:
			position=15;
			break;
		case 1600:
			position=16;
			break;
		case 1630:
			position=17;
			break;
		case 1700:
			position=18;
			break;
		};
		switch(endTime)
		{
		case 800:
			position2=0;
			break;
		case 830:
			position2=1;
			break;
		case 900:
			position2=2;
			break;
		case 930:
			position2=3;
			break;
		case 1000:
			position2=4;
			break;
		case 1030:
			position2=5;
			break;
		case 1100:
			position2=6;
			break;
		case 1130:
			position2=7;
			break;
		case 1200:
			position2=8;
			break;
		case 1230:
			position2=9;
			break;
		case 1300:
			position2=10;
			break;
		case 1330:
			position2=11;
			break;
		case 1400:
			position2=12;
			break;
		case 1430:
			position2=13;
			break;
		case 1500:
			position2=14;
			break;
		case 1530:
			position2=15;
			break;
		case 1600:
			position2=16;
			break;
		case 1630:
			position2=17;
			break;
		case 1700:
			position2=18;
			break;
		};
		switch(DriverNum)
		{
		case 0:
			ID = 'A';
			A.DName=Name;
			A.DriverVehicle=vehicle;
			A.startDriver=startTime;
			A.endDriver=endTime;
			A.ID=ID;
			A.start_position=position;
			A.end_position=position2;
			A.max_value=max_val;

			break;

		case 1:
			ID = 'B';
			B.DName=Name;
			B.DriverVehicle=vehicle;
			B.startDriver=startTime;
			B.endDriver=endTime;
			B.ID=ID;
			B.start_position=position;
						B.end_position=position2;
			B.max_value=max_val;

			break;

		case 2:
			ID = 'C';
			C.DName=Name;
			C.DriverVehicle=vehicle;
			C.startDriver=startTime;
			C.endDriver=endTime;
			C.ID=ID;
			C.start_position=position;
						C.end_position=position2;
			C.max_value=max_val;

			break;

		case 3:
			ID = 'D';
			D.DName=Name;
			D.DriverVehicle=vehicle;
			D.startDriver=startTime;
			D.endDriver=endTime;
			D.ID=ID;
			D.start_position=position;
						D.end_position=position2;
			D.max_value=max_val;

			break;

		case 4:
			ID = 'E';
			E.DName=Name;
			E.DriverVehicle=vehicle;
			E.startDriver=startTime;
			E.endDriver=endTime;
			E.ID=ID;
			E.start_position=position;
			E.end_position=position2;
			E.max_value=max_val;

			break;
		}
		switch(DriverNum)
		{
		case 0:
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				if ((A.availability[j]>=A.availability[A.start_position])&&(A.availability[j]<=A.availability[A.end_position]) ){

					cout<<"   "<<A.availability[j];
				}
				else
					cout<<"   "<<'X';
			};
			break;

		case 1:
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				// for (int h =0;h<18;h++){

				cout<<"   "<<B.availability[j];
			};
			break;

		case 2:
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				// for (int h =0;h<18;h++){

				cout<<"   "<<C.availability[j];
			};
			break;

		case 3:
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				// for (int h =0;h<18;h++){

				cout<<"   "<<D.availability[j];
			};
			break;

		case 4:
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				// for (int h =0;h<18;h++){

				cout<<"   "<<E.availability[j];
			};
			break;
		}
		cout << "\nWelcome " << Name << "!\n"
				<< "You will be working from " << startTime << " to " << endTime << ".\n"
				<< "The vehicle you chose to use is the " << vehicle << ".\n"
				<< "Your ID for the day is " << ID << ".\n"<<"Your max capacity is  "<<max_val
				<< "\nStarting a new registration.\n" << endl;

		DriverNum++;
	} while(DriverNum!=DriverRequest);



	return 0;
}
#endif






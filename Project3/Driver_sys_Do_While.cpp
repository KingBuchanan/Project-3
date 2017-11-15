
/* Programmer   	: Sean Wong
 * File Name   		: Driver_sys_Do_While.cpp
 * Course     		: Computational Problem Solving II - CPET
 * Date Created 	: 11/8/2017
*/

#include <iostream>
#include <string>
using namespace std;

int main()
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
	
	cout<<"Enter Number of Drivers for the day"<<endl; 
	cin>>DriverRequest; 

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
			main();
		}

		else if ((startHour%10) != 0) // prevents user from inputting values not on the hour
		{
			cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
			main();
		}

		else if (startHour > 1700) // prevents user from inputting time after 5pm
		{
			cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
			main();
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
				main();
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
			main();
		}
		else if (endHour < 800)
		{
			cout << "\nThis is not a suitable time to end work. Restarting registration.\n " << endl;
			main();
		}
		else if ((endHour%10) != 0) // prevents user from inputting values not on the hour
		{
			cout << "\nThis is not a suitable time to work. Restarting registration.\n " << endl;
			main();
		}
		else if (endHour > 1700)
		{
			cout << "\nThis is not a suitable time to end work. Restarting registration.\n " << endl;
			main();
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
				main();
			}
		}

		endTime = endHour + endMin;
		if (endTime > 1700)
		{
			cout << "\nThe time you entered for when you want to stop working is not suitable. Restarting registration.\n " << endl;
			main();
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
			break;

			case ('c'):
			case ('C'):
				cout << "You chose to use the Car. " << endl;
			break;

			case ('v'):
			case ('V'):
			cout << "You chose to use the Van. " << endl;
			break;

			default:
				cout << "You have chosen a vehicle that is not suitable. Restarting registration.\n" << endl;
				main();
		}

		switch(DriverNum)
		{
			case 0:
				ID = 'A';
			break;

			case 1:
				ID = 'B';
			break;

			case 2:
				ID = 'C';
			break;

			case 3:
				ID = 'D';
			break;

			case 4:
				ID = 'E';
			break;
		}
		cout << ID;

		DriverNum++;

		cout << "\nWelcome " << Name << "!\n"
			 << "You will be working from " << startTime << " to " << endTime << ".\n"
			 << "The vehicle you chose to use is the " << vehicle << ".\n"
			 << "Your ID for the day is " << ID << ".\n"
			 << "Starting a new registration.\n" << endl;

	} while(DriverNum!=DriverRequest);

	return 0;
}

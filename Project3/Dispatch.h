/* Programmer   	: Hakeem Buchanan
 * File Name   		:Reservation_Display
 * Course     		: Computational Problem Solving II - CPET
 * Date Created 	: 11/8/2017
 */
#include <string>
#include <iostream>
#ifndef Dispatch
#define Dispatch
using namespace std;
const int times[18]={800,830,900,930,1000,1030,1100,1130,1200,1300,1330,1400,1430,1500,1530,1600,1630,1700};
int customer_position;
struct Driver{ // DRIVER STRUCTURE VERY IMPORTANT
	string DName;
	int startDriver;
	int endDriver;
	char DriverVehicle;
	char ID;
	int availability[19]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int start_position;
	int end_position;

	int max_value;
	int reservationNum;
};
Driver A,B,C,D,E;
int create(){
	char Vehicle;
	int startHour;
	int startMin;
	int startTime;
	int position;

	cout<<"Hello Dispatch Officer, welcome to Reserve 3.9\n Please enter the start and end time for the time slot requested."<<endl;
	cout << "Enter the hour for pickup.\n"<< "i.e. 10:00am  for 1000 and 4pm for 1600: " << endl;
	cin >> startHour;
	if (startHour < 800) // Prevents user from inputting time before 8am
	{
		cout << "\nThis is not a suitable time. Restarting.....\n " << endl;
		create();
	}

	else if ((startHour%10) != 0) // prevents user from inputting values not on the hour
	{
		cout << "\nThis is not a suitable time. Restarting......\n " << endl;
		create();
	}

	else if (startHour > 1700) // prevents user from inputting time after 5pm
	{
		cout << "\nThis is not a suitable time. Restarting.........\n " << endl;
		create();
	}
	cout <<"Pickup hour is: " <<startHour << endl;
	cout << "Enter the minutes for pickup.\n";
	cin >> startMin;
	cout <<"Start Minutes : " <<startMin << endl;

	if (startMin != 00)
	{
		if (startMin!=30)
		{
			cout << "\nThis is not a suitable time . Restarting.\n " << endl;
			create();
		}
	}

	startTime = startHour + startMin; // Time starting (hour and 30 minute block)
	cout << "Please input the type of vehicle you would like to use.\n"
			<< "Input 'm' or 'M' for the Motorcycle.\n"
			<< "Input 'c' or 'C' for the Car.\n"
			<< "Input 'v' or 'V' for the Van.\n" << endl;
	cin >> Vehicle;
	switch(Vehicle)
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
		create();
	}

	switch(startTime) // Relates the inputted time to a postion in the array
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
	//CHECK IF VEHICLE MATCHES ANY OF THE VEHICLES IN EACH OBJECT 
	//If not display that there is no space available.
	if (A.DriverVehicle==Vehicle){
		if ((position>=A.start_position)&&(position<=A.end_position)){
			if(A.availability[position]!=A.max_value){
				A.availability[position]++;
				A.reservationNum++;
				cout<<"Space Reserved. See display. "<<endl;
			}
			else
				cout<<"Space Unavailable."<<endl;
		}
		else
			cout<<"Space Unavailable."<<endl;
	}
	if (B.DriverVehicle==Vehicle){
		if ((position>=B.start_position)&&(position<=B.end_position)){
			if(B.availability[position]!=B.max_value){
				B.availability[position]++;
				B.reservationNum++;
				cout<<"Space Reserved. See display. "<<endl;
			}
			else
				cout<<"Space Unavailable."<<endl;
		}
		else
			cout<<"Space Unavailable."<<endl;
	}
	if (C.DriverVehicle==Vehicle){
		if ((position>=C.start_position)&&(position<=C.end_position)){
			if(C.availability[position]!=C.max_value){
				C.availability[position]++;
				C.reservationNum++;
				cout<<"Space Reserved. See display. "<<endl;
			}
			else
				cout<<"Space Unavailable."<<endl;
		}
		else
			cout<<"Space Unavailable."<<endl;
	}
	if (D.DriverVehicle==Vehicle){
		if ((position>=D.start_position)&&(position<=D.end_position)){
			if(D.availability[position]!=D.max_value){
				D.availability[position]++;
				D.reservationNum++;
				cout<<"Space Reserved. See display. "<<endl;
			}
			else
				cout<<"Space Unavailable."<<endl;
		}
		else
			cout<<"Space Unavailable."<<endl;
	}
	if (E.DriverVehicle==Vehicle){
		if ((position>=E.start_position)&&(position<=E.end_position)){
			if(E.availability[position]!=A.max_value){
				E.availability[position]++;
				E.reservationNum++;
				cout<<"Space Reserved. See display. "<<endl;
			}
			else
				cout<<"Space Unavailable."<<endl;
		}
		else
			cout<<"Space Unavailable."<<endl;
	}
	if ((A.DriverVehicle != Vehicle) && (B.DriverVehicle != Vehicle) && (C.DriverVehicle != Vehicle) && (D.DriverVehicle != Vehicle) && (D.DriverVehicle != Vehicle)) {
		cout << "Space Unavailable. Try Again" << endl;
	}

	return 0;



}
int display()
{
	int DriverNum=0;
	int DriverRequest;

	do{
	switch(DriverNum)
	{
		case 0: // Outputs Driver info for first driver
			cout << "\n\nID      : " << A.ID << endl;
			cout << "Name    : " << A.DName << endl;
			cout << "Vehicle : " << A.DriverVehicle << endl;
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				if ((j>=A.start_position)&& j<A.end_position )
				{
					cout<<"   "<<A.availability[j];
				}
				else
					cout<<"   " << 'X';
			};
		break;

		case 1: // Outputs Driver info for second driver
			cout << "\n\nID      : " << B.ID << endl;
			cout << "Name    : " << B.DName << endl;
			cout << "Vehicle : " << B.DriverVehicle << endl;
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				if ((j>=B.start_position)&& j<B.end_position )
				{
					cout<<"   "<<B.availability[j];
				}
				else
					cout<<"   "<<'X';
			};
		break;

		case 2: // Outputs Driver info for third driver
			cout << "\n\nID      : " << C.ID << endl;
			cout << "Name    : " << C.DName << endl;
			cout << "Vehicle : " << C.DriverVehicle << endl;
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				if ((j>=C.start_position)&& j<C.end_position )
				{
					cout<<"   "<<C.availability[j];
				}
				else
					cout<<"   "<<'X';
			};
		break;

		case 3: // Outputs Driver info for fourth driver
			cout << "\n\nID      : " << D.ID << endl;
			cout << "Name    : " << D.DName << endl;
			cout << "Vehicle : " << D.DriverVehicle << endl;
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				if ((j>=D.start_position)&& j<D.end_position )
				{
					cout<<"   "<<D.availability[j];
				}
				else
					cout<<"   "<<'X';
			};
		break;

		case 4: // Outputs Driver info for fifth driver
			cout << "\n\nID      : " << E.ID << endl;
			cout << "Name    : " << E.DName << endl;
			cout << "Vehicle : " << E.DriverVehicle << endl;
			for(int j=0;j<18;j++)
			{
				cout<<"\n  "<<times[j]<<":";

				if ((j>=E.start_position)&& j<E.end_position )
				{
					cout<<"   "<<E.availability[j];
				}
				else
					cout<<"   "<<'X';
			};
		break;
	}

	DriverNum++; // increments Driver Num by 1

	}while(DriverNum!=DriverRequest); // Ends do while when DriverNum is equal to DriverRequest

	return 0;
}
#endif

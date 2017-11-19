
/* Programmer   	: Sean Wong
 * File Name   		: Driver_sys_Do_While.cpp
 * Course     		: Computational Problem Solving II - CPET
 * Date Created 	: 11/8/2017
*/

#include <iostream>
#include <string>
#include "Reservation.h"
#include "Dispatch.h"
using namespace std;

//struct Driver{
//		string DName;
//		int startDriver;
//		int endDriver;
//		char DriverVehicle;
//		char ID;
//		int *available[19];
//		int max_value_ptr=*available[19];
//		int max_value;
//		int reservationNum;
//	};
Driver A,B,C,D,E;

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
	int max_val;

	cout << "Enter Number of Drivers for the day." << endl;
	cin >> DriverRequest;

	if (DriverRequest > 5)
	{
		cout<<"Enter a number less than 5. Restarting registration." << endl;
		main();
	}
	if (DriverRequest==0)
	{
		cout<<"Enter a number more than 0. Restarting registration." << endl;
		main();

	}
	if (DriverRequest < 0)
	{
		cout<<"Enter a number less than 5. Restarting registration." << endl;
		main();
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
						A.DName=Name;
						A.DriverVehicle=vehicle;
						A.startDriver=startTime;
						A.endDriver=endTime;
						A.ID=ID;
						max_val=display(A.DriverVehicle);
						A.max_value=max_val;
						for (int i=0;i<18;i++)
						 {
						A.available[i]=Set();
						 }
					break;

					case 1:
						ID = 'B';
						B.DName=Name;
						B.DriverVehicle=vehicle;
						B.startDriver=startTime;
						B.endDriver=endTime;
						B.ID=ID;
						max_val=display(B.DriverVehicle);
						B.max_value=max_val;
						for (int i=0;i<18;i++)
						{
							B.available[i]=Set();
							 }
					break;

					case 2:
						ID = 'C';
						C.DName=Name;
						C.DriverVehicle=vehicle;
						C.startDriver=startTime;
						C.endDriver=endTime;
						C.ID=ID;
						max_val=display(C.DriverVehicle);
						C.max_value=max_val;
						for (int i=0;i<18;i++)
						{
					 C.available[i]=Set();
					   }
					break;

					case 3:
						ID = 'D';
						D.DName=Name;
						D.DriverVehicle=vehicle;
						D.startDriver=startTime;
						D.endDriver=endTime;
						D.ID=ID;
						max_val=display(D.DriverVehicle);
						D.max_value=max_val;
						for (int i=0;i<18;i++)
						{
						 D.available[i]=Set();
							}
					break;

					case 4:
						ID = 'E';
						E.DName=Name;
						E.DriverVehicle=vehicle;
						E.startDriver=startTime;
						E.endDriver=endTime;
						E.ID=ID;
						max_val=display(E.DriverVehicle);
						E.max_value=max_val;
						for (int i=0;i<18;i++)
						{
						E.available[i]=Set();
							 }
					break;
				}
//				cout << ID;
				cout << "\nWelcome " << Name << "!\n"
							 << "You will be working from " << startTime << " to " << endTime << ".\n"
							 << "The vehicle you chose to use is the " << vehicle << ".\n"
							 << "Your ID for the day is " << ID << ".\n"<<"Your max capacity is  "<<max_val
							 << "\nStarting a new registration.\n" << endl;
				DriverNum++;
	} while(DriverNum!=DriverRequest);

 mainMenu();

	return 0;
}
//int mainMenu(){
//	int Menu_Options;
//	char Reserve_Code;
//
//	cout<<"Hello Dispatch Officer, Please input the function you would like to perform from the menu list."<<endl;
//	cout<<"\nMain Menu\n";
//	cout<<"1- Create Reservation\n";
//	cout<<"2- Delete Reservation(Must have Reservation Code)\n";
//	cout<<"3- Search for Reservation(Must haver Reservation Code)\n ";
//	cout<<"4  Display All Time-Slots";
//	cout<<"5- Quit application";
//	cin>>Menu_Options;
//
//
//	switch(Menu_Options){
//	case 1:
//		create();
//		break;
//	case 2:
//		cout<<"Do you have a Reservation Code? Y/N?\n";
//		cin>>Reserve_Code;
//		if(Reserve_Code=='n'||Reserve_Code=='N'){
//			cout<<"Please get a Reserve Code before continuing."<<endl;
//			mainMenu();
//		}
//
//		break;
//	case 3:
//		cout<<"Do you have a Reservation Code? Y/N?\n";
//		cin>>Reserve_Code;
//		if(Reserve_Code=='n'||Reserve_Code=='N'){
//					cout<<"Please get a Reserve Code before continuing."<<endl;
//					mainMenu();
//				}
//		break;
//	case 4:
//		break;
//	case 5:
//		break;
//
//	}
//
//
//
//return 0;
//}

int create(){
		char Vehicle;
		int startHour;
		int startMin;
//		int endHour;
//		int endMin;
		int startTime;
//		int endTime;
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

//						cout << "Enter the ending hour.\n"<< "i.e. 10:00am  for 1000 and 4pm for 1600: " << endl;
//
//						cin >> endHour;
//
//						if (endHour < startTime)
//						{
//							cout << "\nThis is not a suitable time. Restarting.........\n" << endl;
//							create();
//						}
//						else if (endHour < 800)
//						{
//							cout << "\nThis is not a suitable time. Restarting.........\n" << endl;
//							create();
//						}
//						else if ((endHour%10) != 0) // prevents user from inputting values not on the hour
//						{
//							cout << "\nThis is not a suitable time. Restarting.........\n" << endl;
//							create();
//						}
//						else if (endHour > 1700)
//						{
//							cout << "\nThis is not a suitable time. Restarting.........\n" << endl;
//							create();
//						}
//
//						cout << "Enter the minutes.\n"
//							 << "i.e. 00 for at the hour and 30 for at that half-hour block: " << endl;
//						cin >> endMin;
//						cout <<"End minutes are: " <<endMin << endl;
//
//						if (endMin != 00)
//						{
//							if (endMin!=30)
//							{
//								cout << "\nThis is not a suitable time to work. Restarting.........\n" << endl;
//								create();
//							}
//						}
//
//						endTime = endHour + endMin;
//
//						if (endTime > 1700)
//						{
//							cout << "\nThe time you entered is not suitable. Restarting.........\n" << endl;
//							create();
//						}
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
								A.position=position;
								B.position=position;
								C.position=position;
								D.position=position;
								E.position=position;
								A.max_value_ptr=A.available[A.position];
								B.max_value_ptr=B.available[B.position];
								B.max_value_ptr=B.available[B.position];
								C.max_value_ptr=C.available[C.position];
								D.max_value_ptr=D.available[D.position];
                   if (A.DriverVehicle==Vehicle){
					if((startTime>=A.startDriver)&&(startTime<=A.endDriver)){
						if(A.max_value_ptr!=A.max_value){
						A.available[position]++;
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
                   					if((startTime>=B.startDriver)&&(startTime<=B.endDriver)){
                   						if(B.max_value_ptr!=B.max_value){
                   						B.available[position]++;
                   						cout<<"Space Reserved. See display."<<endl;
                   						}
                   						else
                   							cout<<"Space Unavailable."<<endl;
                   					}
                   					else
                   						cout<<"Space Unavailable."<<endl;
                                      }
                   if (C.DriverVehicle==Vehicle){
                   					if((startTime>=C.startDriver)&&(startTime<=C.endDriver)){
                   						if(C.max_value_ptr!=C.max_value){
                   						C.available[position]++;
                   						cout<<"Space Reserved. See display."<<endl;
                   						}
                   						else
                   							cout<<"Space Unavailable."<<endl;
                   					}
                   					else
                   						cout<<"Space Unavailable."<<endl;
                                      }
                   if (D.DriverVehicle==Vehicle){
                   					if((startTime>=D.startDriver)&&(startTime<=D.endDriver)){
                   						if(D.max_value_ptr!=D.max_value){
                   						D.available[position]++;
                   						cout<<"Space Reserved. See display."<<endl;
                   						}
                   						else
                   							cout<<"Space Unavailable."<<endl;
                   					}
                   					else
                   						cout<<"Space Unavailable."<<endl;
                                      }
                   if (E.DriverVehicle==Vehicle){
                   					if((startTime>=E.startDriver)&&(startTime<=E.endDriver)){
                   						if(E.max_value_ptr!=E.max_value){
                   						E.available[position]++;
                   						cout<<"Space Reserved. See display."<<endl;
                   						}
                   						else
                   							cout<<"Space Unavailable."<<endl;
                   					}
                   					else
                   						cout<<"Space Unavailable."<<endl;
                                      }

	return 0;



	}





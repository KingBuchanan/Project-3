/* Programmer   	: Hakeem Buchanan
 * File Name   		:Reservation_Display
 * Course     		: Computational Problem Solving II - CPET
 * Date Created 	: 11/8/2017
*/
#include <string>
#include <iostream>
using namespace std;

int main(){
	char Vehicle;
	int startHour;
	int startMin;
	int endHour;
	int endMin;
	int startTime;
	int endTime;

	cout<<"Hello Dispatch Officer, welcome to Reserve 3.9\n Please enter the start and end time for the time slot requested."<<endl;
	cout << "Enter the hour for pickup.\n"<< "i.e. 10:00am  for 1000 and 4pm for 1600: " << endl;
			cin >> startHour;
			if (startHour < 800) // Prevents user from inputting time before 8am
					{
						cout << "\nThis is not a suitable time. Restarting.....\n " << endl;
						main();
					}

					else if ((startHour%10) != 0) // prevents user from inputting values not on the hour
					{
						cout << "\nThis is not a suitable time. Restarting......\n " << endl;
						main();
					}

					else if (startHour > 1700) // prevents user from inputting time after 5pm
					{
						cout << "\nThis is not a suitable time. Restarting.........\n " << endl;
						main();
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
							main();
						}
					}

					startTime = startHour + startMin; // Time starting (hour and 30 minute block)

					cout << "Enter the ending hour.\n"<< "i.e. 10:00am  for 1000 and 4pm for 1600: " << endl;

					cin >> endHour;

					if (endHour < startTime)
					{
						cout << "\nThis is not a suitable time. Restarting.........\n" << endl;
						main();
					}
					else if (endHour < 800)
					{
						cout << "\nThis is not a suitable time. Restarting.........\n" << endl;
						main();
					}
					else if ((endHour%10) != 0) // prevents user from inputting values not on the hour
					{
						cout << "\nThis is not a suitable time. Restarting.........\n" << endl;
						main();
					}
					else if (endHour > 1700)
					{
						cout << "\nThis is not a suitable time. Restarting.........\n" << endl;
						main();
					}

					cout << "Enter the minutes.\n"
						 << "i.e. 00 for at the hour and 30 for at that half-hour block: " << endl;
					cin >> endMin;
					cout <<"End minutes are: " <<endMin << endl;

					if (endMin != 00)
					{
						if (endMin!=30)
						{
							cout << "\nThis is not a suitable time to work. Restarting.........\n" << endl;
							main();
						}
					}

					endTime = endHour + endMin;

					if (endTime > 1700)
					{
						cout << "\nThe time you entered is not suitable. Restarting.........\n" << endl;
						main();
					}




}

/* Programmer   	: Hakeem Buchanan
 * File Name   		:Reservation_Display
 * Course     		: Computational Problem Solving II - CPET
 * Date Created 	: 11/8/2017
*/
#ifndef Display
#define Display
#include <string>
#include <iostream>
using namespace std;

int display(char vehicle)
{
	bool SeatTaken;

	int max_value=0;
string schedule[2][19]=
{
{" ","  800","  830","  900","  930","1000","1030","1100","1130","1200","1300","1330","1400","1430","1500","1530","1600","1630","1700"},
{" "," x"," x"," x"," x"," x","x","x","x","x","x","x","x","x","x","x","x","x","x"}};

const int times[18]={800,830,900,930,1000,1030,1100,1130,1200,1300,1330,1400,1430,1500,1530,1600,1630,1700};
int availability[19]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

switch(vehicle){
case 'm':
case 'M':
	max_value=1;
	break;

case 'C':
case 'c':
	max_value=2;
	break;

case 'V':
case 'v':
	max_value=4;
	break;
}





 for(int j=0;j<18;j++)
 {
	 cout<<"\n  "<<times[j]<<":";

// for (int h =0;h<18;h++){

	 cout<<"   "<<availability[j];


 };

// };
return max_value;
 };

int* Set(){
	static int availability[19]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	return availability;
};
#endif










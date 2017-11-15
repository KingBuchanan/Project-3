#include <string>
#include <iostream>
using namespace std;

int main()
{
	bool SeatTaken;
	char vehicle;
	int max_value;
string schedule[2][19]=
{
{" ","800","830","900","930","1000","1030","1100","1130","1200","1300","1330","1400","1430","1500","1530","1600","1630","1700"},
{" ","x","x","x","x","x","x","x","x","x","x","x","x","x","x","x","x","x","x"}};

const int times[19]={800,830,900,930,1000,1030,1100,1130,1200,1300,1330,1400,1430,1500,1530,1600,1630,1700};
char availability[19]{'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'};

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

 for (int i=0;i<18;i++)
 {
	 if (availability[i]==max_value){
		 availability[i]='F';
	 }

 }

 for(int j=0;j<18;j++)
 {
	 cout<<"  "<<times[j];
	 cout<<"  "<<availability[j];
	 }
 }


};








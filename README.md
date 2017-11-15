
# Project-3

Project developed by Students at RIT: Hakeem Buchanan and Sean Wong. We are creating a Shuttle reservation System 
based on specifications put forth by the professor. 
Task: Design a shuttle reservation system for scheduling transportation between the county airport and the city train station. The shuttle service runs daily between 8 to 5. Converted to military time. So from 800 to 1700.
 
	- Flights arrive /depart the airport every hour on the hour so exactly at 8, 9 , 10. 
	- Trains arrive and depart every half hour on the hour. 830,930,1030.
	- The shuttle drivers drive from the airport to the train station (8:10-8:20) so allowing the passengers to get to their trains with 10 minutes to spare.  Similarly the train to airport(840 to 850) with ten minutes to spare. 

Design Specifications:
 The shuttle drivers work as needed and select their own schedule. 

A) Every Morning Drivers Contact Dispatch and provides the info:
	- Name(String)
	- The time they are working in military time
	- Type of vehicle (Motorcycle, Car or Van)
	- Drivers is assigned an ID( A,B,C,D or E)
	- System allows up to five drivers per day. (Most likely a do while) 

After entering the drivers, reservations can be taken. No changes can be made to the info once reservations have begun. 

Reservations System:
	- Create a reservation
		○ Enter time-slot and vehicle. If available assign the reservation and display. 
		○ If multiple drivers meet the requirements the reservation will be a given to the driver with the least amount of reservations. 
		○ If nothing is available report these results, Say Not Available. 
	- Delete a reservation using Reservation code.
	- Search and display a reservation by  code,

Code requirements: 
 - Header files
	- Class inheritance for the vehicles
	-  Parent: Vehicles 
		○ Child: Car
		○ Child: Van 
		○ Child: Motorcycle 
	
		


B)Reservations include the following:
	- The time-slot reserved. 
	- Type of vehicle requested 
		○ Motorcycle can only accommodate a single passenger. Only one reservation per time slot. 
		○ Cars can accommodate 2 passengers. Only two reservation per time slot. 
		○ Vans can accommodate 4 thus four reservations per time slot. 
	- An assigned six character reservation code consisting of the driver's ID and a five digit count. So the number of reservations for that day and the Id. Say the number of reservations that day is 4 and the driver ID was B. Then the reservation code would be B00004.
	- Reservations are associated with a single passenger. 

Task 11/8
	- Driver System( No classes)
	- Reservation System
	- Talk Zion about the Driver System , Classes
	

B) Strategies for Reservations
	- Dispatch inputs A character that corresponds to type of travel
		○ A for traveling to the Airport. 
		○ T for traveling to the train station 
	- Traveling to the Airport from the train station will occur 10 minutes after train arrives which is on the half hour. Passengers will get there with 10 minutes to spare. 
	- Traveling to the Train Station will occur 10 minutes after the plane lands which is every hour. 
	- Reservations contain:
		○ The Reserved time
			§ Ask clients what time their respective transportation arrives. Then in the code have the time set to 10 minutes afterward. 
		○ Type of Vehicle Requested. Character 
		○ Assigned Reservation number is the number of reservation made that day 
			§ Probably set in a do while that increments the number of reservations that day by 1. 
		○ One passenger per reservation. 
	§ Reservation system determined by an array. 
	- Each Driver will have their own array based on their ID character. 
		○ Based on the vehicle the array will have a set number of seats available per time. 
	

			
		

A) Strategies for Drivers- SEAN WONG 
	- Have a do while that asks for :
		○ A string for the name 
		○ Two integers that ask for the time (Military)
			§ The start time 
			§ The end time 
			§ Time cannot exceed 9 hours 
			§ Time cannot start before 8 and cannot end after 17(5 pm)
		○ Character for the Vehicle type 
			§ "M" for motorcycle
			§ "C" for Car
			§ "V" for Van   
	- After Driver completes their inputs they are given a character for their ID corresponding to the order  they signed in. Ex(1==A, 2==B)
	- Integer for number of drivers increments until reaching 5. 
	- Classes for the vehicles needed.



Can you do an array in a structure? 
YYESSSS

QUESTIONS FOR ZION
	- Are we allowed to separate by direction?
		○  Can be Se
	- Should we use a linked list? 
		○ NO. AN array is fixed and we have a set time slot. 
	

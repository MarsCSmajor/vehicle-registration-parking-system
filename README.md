# Car Registration Parking system
A program fully coded on C++ by MarsCSmajor
Compability: Only for Windows 8, 10, 11

The program creates a parking system of vehicles. Takes in VIN number, license plates, vehicle type, and name of the owner. 
You can add, search,find, and remove vehicle.

The program has a save system in which will save the changes that a user made during the program. I have build a login system that makes the user create an account in order to login to the program. All data being moved throughout the program is being moved to files. 

New Features will be added in the future and improvements will me made. 



# Instructions for Setup
Download all the code in a file and make sure everything is in there and that no code is changed.
For Windows users, make sure you have MingW compiler working or that your workspace supports #include<windows.h> 
For Windows 8,10,11 
 Compile the code as follows 
 g++ -o parkingApp .\parking.cpp .\user.cpp .\display.cpp .\main.cpp .\savedata.cpp .\login.cpp
 .\parkingApp
Later in the future, I will change a bit the files and have CMAKE working for ease

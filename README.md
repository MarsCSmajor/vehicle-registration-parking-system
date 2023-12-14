# Car Registration Parking system
Compability: Only for Windows 8, 10, 11

The program creates a parking system of vehicles. Takes in VIN number, license plates, vehicle type, and name of the owner. 
You can add, search,find, and remove vehicle.

The program has a save system in which will save the changes that a user made during the program. I have build a login system that makes the user create an account in order to login to the program. All data being moved throughout the program is being moved to files. 

New Features will be added in the future and improvements will me made. 



# Instructions for Setup
Download all the code in a file and make sure everything is in there and that no code is changed.

For Windows users, make sure you have MingW compiler working or that your workspace supports #include<windows.h> and other c++ libraries 
For Windows 8,10,11.

Linux OS is not supported due to windows.h in which only windows OS has. I will try to work on making universal compability with Linux and MacOS systems

To run the code run following commands on terminal. NOTE: Make sure your in the folder where the code and other important files is located

Cmake .

make

.\ParkingAPP

If it doesn't work, use g++

 g++ -o parkingApp .\parking.cpp .\user.cpp .\display.cpp .\main.cpp .\savedata.cpp .\login.cpp

.\parkingApp


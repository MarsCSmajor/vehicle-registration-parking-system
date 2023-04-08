#include "library.h"
#include "display.h"
#include "display.h"
#include "parking.h"
#include "savedata.h"
#include "user.h"
#include "login.h"
int main() {


string vin;
string licensePlate;
string vehicle;
string nameOfOwner;
display h;
parking parkingSystem;
string file = "Data/saveData.txt";
string loginfile = "Data/loginData.txt";
string emailAddr;
string password;
string fullname;

string fn;
string e;
string p;


vector<parking>v;
vector<user>u;



cout <<"WELCOME TO PARKING SYSTEM v3.0" << endl;


//login system
loginSystem(u,loginfile);
system("CLS");


//car system do not change
importData(v,file);

bool runProgram = true;
while(runProgram) {

h.printMenu();
int input = 0;
if(!(cin >> input)) { 
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // since input is an int, should expect an integer. if non int, will trigger this statement
    cout <<"Invalid input" << endl;
    system("pause");
    system("CLS");
}

else {
if (input == 1) { 
    // add a car
    system("CLS");

    cout << "License Plate: ";
    cin >> licensePlate;
    cout << endl;

    cout <<"VIN: ";
    cin >> vin;
    cout << endl;
    cout <<"Vehichle Type: ";
    // .ignore() prevents bugs in getting a line of text as input
    cin.ignore();
    getline(cin, vehicle);
    cout << endl;

    cout <<"Name: ";
    //cin.ignore();
    getline(cin,nameOfOwner);
    cout << endl;
    

    parking user = parking(licensePlate,vin,vehicle,nameOfOwner);
    v.push_back(user);
    system("CLS");
     


}

else if (input == 2) {
    system("CLS");
parkingSystem.displayVehicleStatus(v);
 system("pause");
 system("CLS");
    }

else if (input == 3) {
    // remove vehicle
    system("CLS");

    cout <<"input VIN: " << endl;
    cin.clear();
    cin >> vin;
    parkingSystem.removeVehicle(v,vin);
    }

else if (input == 4) { 
    //Find vehicle
    system("CLS");
    cin.clear(); // clear the inputs to prevent future bugs
    cout <<"Input License Plate: ";
    cin >> licensePlate;
    parkingSystem.FindVehicle(v,licensePlate);
    system("pause");
    system("CLS");

    }
else if (input == 5) { 
    ExportData(v,file);
    ExportLoginData(u,loginfile);
    runProgram = false;
    }
else {
    cout <<" INVALID INPUT. PLEASE TRY AGAIN " << endl;
    system("CLS");
    }


}

}
    return 0;
}
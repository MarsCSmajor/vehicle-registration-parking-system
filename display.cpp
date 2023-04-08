#include "library.h"
#include "display.h"


void display::printMenu() {


    auto now = system_clock::now();
    time_t now_c = system_clock::to_time_t(now); // tell time. Real time

     cout <<"\n\n\t\t\t"<<ctime(&now_c) << endl;
     cout << "\n\t\t ====== CAR REGISTRATION SYSTEM ======" << endl;
    cout << "\t\t\t1 Add a Car" << endl;
    cout <<"\t\t\t2 Display All Vehicles" << endl;
    cout <<"\t\t\t3 Remove vehicle" << endl;
    cout <<"\t\t\t4 Find vehicle in System" << endl; 
    cout <<"\t\t\t5 Save and Exit the Program" << endl;
    cout <<"\t\t\t7 Save and log out COMING SOON" << endl;
    cout <<"\t\t\t8 Settings (Coming soom)"<< endl;
    cout << "\n\n\t\t\t PLEASE CHOOSE AN OPTION" << endl;
    cout <<"\t\t\ttype(1-5): ";
   
}


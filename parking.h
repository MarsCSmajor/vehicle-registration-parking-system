#ifndef PARKING_H
#define PARKING_H
#include "library.h"
class parking { 

private: 
    string licensePlate; 
    string vin;
    string vehicleType;
    string owner;


public: 
	
    parking(string l, string v, string vt, string owner);
    //parking(licenseplate, vin, vehicletype);
    parking();

    string getVin(); 
    void setVin(string);
    
    string getlicensePlate();
    void setlicensePlate(string);

    string getOwnerName();
    void setOwnerName(string);

    string getVehicleType();
    void setVehicleType(string);
    void displayVehicleStatus(vector<parking> &v);

    void removeVehicle(vector<parking> &v, string);

    void FindVehicle(vector<parking> &v,string);
    

};






#endif

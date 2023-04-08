#include "library.h"
#include "parking.h"

    parking::parking() { 
        this->licensePlate = "none";
        this->vin = "none";
        this->vehicleType = "none";
        this->owner = "no Name";
    }

    parking::parking(string l, string v, string vt,string owner) { 
        this->licensePlate = l;
        this->vin = v;
        this->vehicleType = vt;
        this->owner = owner;
    }

    string parking::getVin() { 
        return this->vin;
    }

    void parking::setVin(string v) {
        this->vin = v; 
    }

    string parking::getOwnerName() {
        return this->owner;
        
    }

    void parking::setOwnerName(string o) {
        this->owner = o;
    }

    string parking::getlicensePlate() {
        return this->licensePlate;
    }

    void parking::setlicensePlate(string plate) {
        this->licensePlate = plate;
    }

    string parking::getVehicleType() {
        return this->vehicleType;
    }

    void parking::setVehicleType(string p) { 
        this->vehicleType = p;
    }


void parking::displayVehicleStatus(vector<parking> &v) {
    int y = 0;
    if(v.empty()) {
        cout <<"No Vehicles in system" << endl;
    }
    else {
    for(int i = 0; i < v.size(); i++) {
        cout << "Number: " << ++y << endl;
        cout <<"VIN: " << v.at(i).getVin() << endl;
        cout <<"License Plate: "<<v.at(i).getlicensePlate() << endl;
        cout <<"Vehicle: "<< v.at(i).getVehicleType() << endl;
        cout <<"Name: " << v.at(i).getOwnerName() << endl;
        cout << endl;
        }
    }
}

void parking::removeVehicle(vector<parking> &v, string vinverify) {
   int count = 0;
    if(!v.empty()) {
    for (int i = 0; i < v.size();i++) {
        ++count; 
        if(vinverify == v.at(i).getVin()) {
            auto it = v.begin() + (count -1);
            v.erase(it);
            return;
            }
        }
    }
}



void parking::FindVehicle(vector<parking> &v, string CarPlates) {
    for(int i = 0; i < v.size();++i) {
        if (v.at(i).getlicensePlate() == CarPlates) {
        cout <<"VIN: " << v.at(i).getVin() << endl;
        cout <<"License Plate: "<<v.at(i).getlicensePlate() << endl;
        cout <<"Vehicle: "<< v.at(i).getVehicleType() << endl;
        cout <<"Owner: "<< v.at(i).getOwnerName() << endl;
        cout << endl;
        return;
        }

    }
    cout << "Vehicle not found on system" << endl;
}
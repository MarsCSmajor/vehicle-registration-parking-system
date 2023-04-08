#include "library.h"
#include "parking.h"
#include "user.h"
#include "savedata.h"

void importData(vector<parking> &v, string file) {
    fstream inFS;
    string license;
    string vinNumber;
    string vehicle;
    string OwnerofVehicle;
    inFS.open(file);
    if(!inFS.is_open()) {
        cout <<"Error in opening file" <<endl;
        exit(1);
    }
    while(inFS >> license, inFS >> vinNumber) {
        inFS.ignore();
        getline(inFS,vehicle);
        getline(inFS,OwnerofVehicle);
        parking import = parking(license,vinNumber,vehicle,OwnerofVehicle);
        v.push_back(import);

    }
    inFS.close();

}

void ExportData(vector<parking> &v,string filename) { 
    ofstream outFS;  
    outFS.open(filename);
    if(!outFS.is_open()) {
        cout <<"Error in opening file" << endl;
        exit(1);
    }

    for(int i = 0; i < v.size();i++) {
        outFS << v.at(i).getlicensePlate() << endl;
        outFS << v.at(i).getVin() << endl;
        outFS << v.at(i).getVehicleType() << endl;
        outFS << v.at(i).getOwnerName() << endl;

    }
    outFS.close();
}

void importLoginData(vector<user> &u, string fileInput) {
    ifstream filesystem(fileInput);
    if(!filesystem.is_open()) {
        cout <<"Error in opening login file" << endl;
        exit(1);
    }
    
    string userEmail;
    string userPWD;
    string nameUser;
    while (filesystem >> userEmail) {
        filesystem >> userPWD;
        filesystem.ignore();
         getline(filesystem,nameUser);
        user importSystemData = user(userEmail, userPWD,nameUser);
        u.push_back(importSystemData);
    }


    filesystem.close();
}


void ExportLoginData(vector<user> &u, string fileinput) {
    ofstream DataToFile;
    DataToFile.open(fileinput);
    if(!DataToFile.is_open()) {
        cout <<"Error in opening file" << endl;
        exit(1);
    }
    else {
    for(int i = 0; i < u.size();i++) {
        DataToFile << u.at(i).getEmail() << endl;
        DataToFile << u.at(i).getPassword() << endl;
        DataToFile << u.at(i).getName() << endl;
    }
    DataToFile.close();
    }
}

void userlogActivity(vector<user> &u,string e) {
ofstream out;
string logfile = "Data/activity.txt";
out.open(logfile);
if(!out.is_open()) {
    cout <<"Error in opening file" << endl;
    exit(1);
}
    auto now = system_clock::now();
    time_t now_c = system_clock::to_time_t(now); // tell time. Real time
    string n;
    for(int i = 0; i < u.size();i++) {
        if(u.at(i).getEmail() == e) {
            n = u.at(i).getName();
            break;
        }
    }
    out << ctime(&now_c) << endl;
    out <<"Name of person: " << n << endl;
    out <<"Email Address: " << e << endl;
out.close();
}

int getInput() { 
int x = 0; 
bool validInput = false;
while(!validInput) {
    if(!(cin >> x)) { 
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        break;
    }
    return x;
}
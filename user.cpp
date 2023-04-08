#include "library.h"
#include "user.h"
#include "parking.h"
user::user() {
    this->email = "none";
    this->password = "none";
    this->name = "none";
}
user::user(string email, string password, string name) {  
    this->email = email;
    this->password = password; 
    this->name = name;
}

string user::getName() { 
    return this->name;
}
void user::setName(string input) { 
    this->name = input; 
}

string user::getEmail() {
    return this->email;
}
void user::setEmail(string input) { 
    this->email = input;
}

string user::getPassword() {
    return this->password;
}
void user::setPassword(string input) {
    this->password = input;
}


void user::addUser(vector<user> &u, string email1, string name1, string password1) {
    user person = user(email1,name1,password1);
    u.push_back(person);
}

void user::findUser(vector<user>&u,string emailInput, string nameVerify) { 
    for(int i = 0; i < u.size();i++) {
        if(u.at(i).getEmail() == emailInput && u.at(i).getName() == nameVerify) {
            cout <<"USER FOUND: " << endl;
            cout <<"EMAIL: "<< u.at(i).getEmail() << endl;
            cout <<"Name OF USER: " << u.at(i).getName() << endl;
            return;
        }
    }
    cout <<"USER NOT FOUND OR INCORRECT DATA INPUT" << endl;
}


bool user::findUserAtLogin(vector<user> &u,string emailInput) {
    for(int i = 0; i < u.size();i++) {
        if(u.at(i).getEmail() == emailInput) {
            return true;
        }
    }
    return false;
}

    bool user::findPasswordAtlogin(vector<user>&u, string email2,string pwd) {
        for(int i = 0;i < u.size();i++) { 
            if(u.at(i).getEmail() == email2 && u.at(i).getPassword() == pwd) {
                return true;
            }
        }
        return false;
    }

     void user::echoDisable(DWORD mode, HANDLE hstdin) {
        GetConsoleMode(hstdin, &mode);
        SetConsoleMode(hstdin, mode & (~ENABLE_ECHO_INPUT));
     }

     void user::echoEnable(DWORD mode,HANDLE hstdin) {
        SetConsoleMode(hstdin, mode);
     }




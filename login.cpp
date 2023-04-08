
#include "library.h"
#include "user.h"
#include "login.h"
#include "savedata.h"

user admin;
void loginSystem(vector<user>&u,string fileToinput) {
    int inputData;
    importLoginData(u,fileToinput); 
    
    bool run = true;

    while(run) {
        string inputName;
        string inputEmail;
        string inputPWD;

    displayLogin();
    if(!(cin >> inputData)) { 
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // since input is an int, should expect an integer. if non int, will trigger this statement
    cout <<"Invalid input" << endl;
    }
    else {
        if(inputData == 1) {
            //add user
        system("CLS");
        cout <<"FULL NAME FOLLOW BY ENTER: ";
        cin.ignore();
        getline(cin,inputName, '\n');
        cout << endl;
        cout <<"ENTER EMAIL ADDRESS: ";
        getline(cin,inputEmail, '\n');
        cout << endl;
        //cin.clear();
        cout <<" CREATE A PASSWORD; ";
        getline(cin,inputPWD,'\n');
        cout << endl;
        //cin.clear();
        admin.addUser(u,inputEmail,inputPWD,inputName);
        


        }
        else if(inputData > 1 && inputData < 3) {
            //call login system
            system("CLS");
            cout <<"PLEASE PROVIDE EMAIL AND PASSWORD" <<endl;
            cout <<"PROVIDE EMAIL-> ";
            cin.ignore();
            getline(cin,inputEmail, '\n');
            cout << endl;
            if(admin.findUserAtLogin(u,inputEmail)) {
                // when email is found
                //stopped here
                DWORD mode;
                HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
                admin.echoDisable(mode,hstdin); // type without displaying what your typing
                cout <<"PROVIDE PASSWORD-> ";
                getline(cin,inputPWD);
                admin.echoEnable(mode,hstdin);
                cout << endl;
                if(admin.findPasswordAtlogin(u,inputEmail,inputPWD)) {
                    // go to system
                    break;
                }
                else {
                    cout <<"invalid Password" << endl;
                }
            }
            cout <<"OR Invalid Email" << endl;
        }
        else {
            if(u.empty()) { //when the vector is empty
                cout <<"NO users register in system: " << endl;

            }
        }


    }
}

}



void displayLogin() {
    cout <<"LOGIN SYSTEM" << endl;
    cout <<"You will need an account in order to login in to the parking system" << endl;
    cout << "Press 1 to create an account or 2 to login in -> "; //input
}
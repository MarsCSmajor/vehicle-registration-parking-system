#ifndef USER_H
#define USER_H 
#include "library.h"
class user {
    private: 
    string name; 
    string email;
    string password;
    public: 
    user();
     user(string, string, string);

    void addUser(vector<user> &,string,string,string);

    void findUser(vector<user> &,string emailInput,string nameVerify);

    bool findUserAtLogin(vector<user> &,string emailInput);

    bool findPasswordAtlogin(vector<user>&, string email2, string pwd);
    
    void RemoveUser(vector<user>&);

    void updateInfo(vector<user> &);

    string getName();
    void setName(string);

    string getEmail();
    void setEmail(string);

    string getPassword();
    void setPassword(string);

    void echoDisable(DWORD,HANDLE);

    void echoEnable(DWORD,HANDLE);

    
};


#endif 
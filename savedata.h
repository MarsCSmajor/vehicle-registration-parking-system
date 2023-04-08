#ifndef SAVEDATA_H
#define SAVEDATA_H

#include "library.h"
#include "user.h"
#include "parking.h"
void importData(vector<parking> &v,string);

void ExportData(vector<parking> &v,string);

void ExportLoginData(vector<user> &, string);

void importLoginData(vector<user> &, string);

void userlogActivity(vector<user> &,string e);

int getInput();





#endif
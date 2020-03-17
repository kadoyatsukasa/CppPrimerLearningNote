#pragma once

#include<iostream>
#include<sstream>
#include<vector>
#include<string>

using std::vector;
using std::string;
using std::istringstream;
using std::ostringstream;

class PersonInfo{
    public:
    PersonInfo();
    PersonInfo(string,vector<string>);
    
    inline void setName(string name){mName=name;}
    inline void setPhones(vector<string> phones){mPhones=phones;}
    string getName(){return mName;}
    vector<string> getPhones(){return mPhones};

    private:
    string mName;
    vector<string> mPhones;

};

vector<PersonInfo> savePersonInfoAsVector(PersonInfo info);

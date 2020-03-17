#include "person.h"
#include<iostream>

using std::cin;


vector<PersonInfo> savePersonInfoAsVector(PersonInfo info){
    string line,word;
    string tName;
    vector<string> tPhones;
    vector<PersonInfo> result;

    while(std::getline(cin,line)){
        PersonInfo temp;
        istringstream record(line);
        record>>tName;
        temp.setName(tName);
        while (record>>word)
        {
            tPhones.push_back(word);
            temp.setPhones(tPhones);
        }
        result.push_back(temp);
    }
    return result;
}
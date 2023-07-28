/*
ID: xinlei51 
TASK: gift1
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream fout("gift1.out");
    ifstream fin("gift1.in");
    int n;
    fin>>n;
//Lesson 1: read well the input, we should use an unordered map
    //ok, but since they are weird, they want an ordered answer, based on the intiail input, so i need to keep the strings in an array
    unordered_map<string, int> gifts;
    string name;
    string names[n];
    for(int i=0; i<n; i++){
        fin>>name;
        gifts.insert(pair<string, int> (name, 0));
        names[i]=name;
    }
    int amount, people;
    for(int j=0; j<n; j++){
        fin>>name;
        fin>>amount>>people;
        //add the rest
        if(people!=0) gifts[name]+=amount%people;
        //remove the amount
        gifts[name]-=amount;
        for(int i=0; i<people; i++){
            fin>>name;
            //I can't divide by 0 TT
            if(people!=0) gifts[name]+=amount/people;
        }
    }
    cout<<"HI";
    //looping through the final map
    for(auto name:names){
        fout<<name<<" "<<gifts[name]<<"\n";
    }
    return 0;
}

    // string name;
    // vector<string> names;
    // int value;
    // //creating a vector with 5 0s;
    // vector<int> values(n,0);
    // for(int i=0; i<n;i++){
    //     fin>>name;
    //     names.push_back(name);
    // }
    // int amount, people, rest;
    // for(int j=0; j<values.size(); j++){
    //     fin>>amount>>people;
    //     rest=amount%people;
    //     values[j]+=rest;
    //     amount-=rest;
    //     for(int i=j+1; i<values.size(); i++){
    //         values[i]+=amount/people;
    //     }
    //     if(people>=values.size()-j){
    //         //that is cuz the values of the 
    //         for(int i=0; i<values.size()-j; i++){
    //             values[i]+=amount/people;
    //         }
    //     }
    // }
    // for(int i=0; i<values.size(); i++){
    //     fout<<names[i]<<" "<<values[i]<<"\n";
    // }

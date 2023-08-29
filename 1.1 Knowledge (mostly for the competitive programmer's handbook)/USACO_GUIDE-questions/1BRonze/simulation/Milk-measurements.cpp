#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, idx, val, ans=0, mx=0;//M=7, E=7, B=7, ;
    map<string, int> results={
        {"Mildred", 7},
        {"Elsie", 7},
        {"Bessie", 7}
    };
    vector<pair<string, int>> dates(1000,{"",0});
    string name;
    vector<string> previous_max, current_max={"HI"};
    ofstream fout("measurement.out");
    ifstream fin("measurement.in");
    fin>>N;
    cout<<N;
    while(N--){
        fin>>idx>>name>>val;
        dates[idx]=make_pair(name, val);
    }
    // char mx;
    for(int i=0; i<100; i++){
        //here, i skip all the times where there is nothing in the given date
        if(dates[i].first=="") continue;

    //!I'll use a map instead of a variable with an integer each. 
        // if(dates[i].first=="Mildred") {M+=dates[i].second;}
        // else if(dates[i].first=="Elsie") {E+=dates[i].second;}
        // else if (dates[i].first=="Bessie"){B+=dates[i].second;}
        // prev_max=mx;
        if(dates[i].first=="Mildred") {results["Mildred"]+=dates[i].second;}
        else if(dates[i].first=="Elsie") {results["Elsie"]+=dates[i].second;}
        else if (dates[i].first=="Bessie"){results["Bessie"]+=dates[i].second;}
        //!when taking the min or max of more than 2 values, we must use {}
        mx=max({results["Mildred"], results["Elsie"], results["Bessie"]});

        //i'll use a vector to keep the maximum, since, if there are more than 1 cows that have the same result, and it changes, i have to upate
        previous_max=current_max;
        current_max.clear();
        if(mx==results["Mildred"]){
            //!use =, not ==    
            current_max.push_back("Mildred");
        }
        if(mx==results["Elsie"]){
            current_max.push_back("Elsie");
        }
        if(mx==results["Bessie"]){
            current_max.push_back("Bessie");
        }
        for(auto x: current_max) cout<<x<<" ";
        
    //!it is possible to compare vectors between themselves, just like we would compare strings!
        if(current_max!=previous_max) ans++;
//my error is that, it is not the numbers that count, but the name that counts (if it changes or not)
        // if(prev_max!=mx)ans++;
    }
    fout<<ans;
    return 0;
}

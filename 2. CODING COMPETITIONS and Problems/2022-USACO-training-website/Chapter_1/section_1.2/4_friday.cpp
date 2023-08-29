/*
ID: xinlei51 
TASK: friday
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream fout("friday.out");
    ifstream fin("friday.in");
    int n;
    //here I will be creating an array of 8 element, simply so that I can ignore the first element, at index 0
        //Order: sunday, monday, tuesday, wednesday, friday, saturday
    int days [7]={0};
    fin>>n;
    int first=0, value;
    //biggest programmer's error is to try to compute everything, when some things can easily be computed by hand
    vector<int> months;
    //BRUH!H!H!HH!H!H! 
        // the error is that TT july AND august have 31 days TT
    for(int i=0; i<n; i++){
        //read well the question, so many details TT
        if((1900+i)%400==0 || ((1900+i)%4==0 && (1900+i)%100!=0)) months={3,1,3,2,3,2,3,3,2,3,2,3};
        else months={3,0,3,2,3,2,3,3,2,3,2,3};

        for(auto value: months){
            days[(first+13)%7]+=1;
            first+=value;
            first%=7;
        }
    }
    // i gotta start looping from saturday...
    int sat=5;
    for(int i=1; i<=sizeof(days)/sizeof(int); i++){
        if(i==7) fout<<days[(i+sat)%(sizeof(days)/sizeof(int))];
        else fout<<days[(i+sat)%(sizeof(days)/sizeof(int))]<<" ";
    }
    fout<<"\n";
    // int months[]={31,28,31,30,31,30,31,30,31,30,31,30};
    // int months_weird []={31,29,31,30,31,30,31,30,31,30,31,30}
    // for(int i=0; i<n; i++){
    //     // if(i)
    //     for(int j=0; j<12; j++){
    //         //here, the index 6 is the seventh number..
    //             //Thus, I will be dividing by 12, since my first day starts at 0
    //         days[(first+13)%7]+=1;
    //         for(int k=0; k<7; k++){
    //             fout<<days[k]<<" ";
    //         }
    //         fout<<"\n";
    //         if(j%2==0){
    //             value=31%7;
    //         }
    //         //not february
    //         else if(j!=1 & j%2!=0){
    //             value=30%7;
    //         }
    //         else if (j==1){
    //             if(i%100!=0 && i%4==0){
    //                 value = 29%7;
    //             }
    //             else value=28%7;
    //         }
            
    //         //here i gotta add the value, but if it exceeds 7, i gotta put it back on base 7
    //         first += value;
    //         first%=7;
    //         fout<<" "<<first<<"\n ";
            
    //     }
    // // }
    // for(int i=0; i<7; i++){
    //     fout<<days[i]<<" ";
    // }
    // fout<<"\n";
    return 0;
}
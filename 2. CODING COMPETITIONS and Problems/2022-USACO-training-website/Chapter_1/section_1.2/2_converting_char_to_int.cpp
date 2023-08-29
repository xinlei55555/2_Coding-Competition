/*
ID: xinlei51 
TASK: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream fout("ride.out");
    ifstream fin("ride.in");

    string a,b;
    fin>>a>>b;
    cout<<a<<b;
    //lesson 8: an array int result[2]={1} will NOT initialize two 1s, but will return one 1 and one 0 TT
    int results[]={1,1};
    //lesson9: sizeof() gives you the ram space that a sting occupies, NOT the size of the string.
    for(int i=0; i<a.size(); i++){
        //lesson 7: don't forget to convert
        results[0]*=(a[i]-'A'+1);
        
    }
    for(int i=0; i<b.size(); i++){
        results[1]*=(b[i]-'A'+1);
    }
    if(results[0]%47==results[1]%47){
        fout<<"GO\n";
    }
    else fout<<"STAY\n";

}


// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     //lesson 3: I have to create a file and output a file
//     ofstream fout ("ride.out");

//     //lesson 6: USACO works with input and output files, NOT with cin cout... TT yes, cry baby cry

//     char letter;
//     //lesson 1: always declare my variables
//     int sum;
//     int result [2] ;
//     for(int i=0; i<2; i++){
//         //lesson 2: THEN, set your values 
//         sum = 1; 

//         //lesson 5: you have to learn to input as many values as the user wants
//         while(cin>>letter){
            
//             //Here I am converting the value of the char into an int. Yet, here, I see that C = 3, and not 2 (I will thus add 1)
//             sum = sum*((letter-'A')+1);
//             //cout<<sum<<"\n";
//             result[i]=sum;

//         }
        
//     }
//     if((result[0]%47)==(result[1]%47)){
//         //lesson 4: end output with a new line TT
//         fout<<"GO\n";
//     }
//     else fout<<"STAY\n";
    
//     return 0;
// }
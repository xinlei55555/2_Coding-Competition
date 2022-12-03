#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a[200001];
    for(cin>>t; t--;){
        cin>>n;
        if(n%2!=0){cout<<-1<<"\n"; continue;}
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        

    }
    return 0;
}

//*core assumptions:
/*1. if number of elements is impair, there are no possible ways to agence them
//! yes! you were right: it is the sum that changes. If the sum of the array is odd, then it is impossible (the pairing does not affect the parity)
2. if the signe of two numbers next to each other is the same, then I can always substract them to get a value that is 0
3. if the sign of two numbers next to each other is not the same, then I can always add them together to make them 0
4. the length of a segment 
5. I can print ANY segment of the array...
    //I could basically go two by two and print the values...
6. I am guessing that the number of negative numbers is the number of segments...
    //if both of the negative numbers are on the same odd / even values, then we can discard
    Ex: -1 1 -1 1 1 1 
*/
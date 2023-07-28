#include <bits/stdc++.h>
using namespace std;
int i=3;
int main(){
    int i=0;
    cout<<i;
    int arr[5]={0,1,2,3,4};
        //here, i notice it will cout the value of i BEFORE ++
    for(i; i<5;) cout<<arr[i++];
    
    return 0;
}
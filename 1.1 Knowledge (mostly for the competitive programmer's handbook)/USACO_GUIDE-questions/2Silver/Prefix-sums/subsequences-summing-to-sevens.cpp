#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("div7.in");
    ofstream cout("div7.out");

    long long n; cin>>n;
    long long i,arr[n]={0};
    cin>>arr[0];
    //prefix sum array
    for(i=1;i<n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }

    //looping strategically from the bigger sizes to the smaller size, and checking the differences.
    
    for(int s=n; s!=0; s--){
        for(i=0;i+s<n;i++){
            if((arr[i+s]-arr[i])%7==0) {cout<<s;return 0;}
        }
    }
    return 0;
}
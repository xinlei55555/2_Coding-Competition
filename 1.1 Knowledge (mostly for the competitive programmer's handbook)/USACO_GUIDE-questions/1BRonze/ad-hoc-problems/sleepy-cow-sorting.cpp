#include <bits/stdc++.h>
using namespace std;
int main (){
    ofstream cout("sleepy.out");
    ifstream cin("sleepy.in");
    int n; cin>>n;
    int arr[n],idx=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0) continue;
        //not in order
        if(arr[i]<arr[i-1]){
            idx=i;
        }
    }
    if(idx==-1) {cout<<0; return 0;}
    cout<<n-(n-(idx));

    return 0;
}
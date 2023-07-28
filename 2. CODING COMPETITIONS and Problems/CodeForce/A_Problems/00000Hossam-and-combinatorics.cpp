#include <bits/stdc++.h>
using namespace std;
//!its not factorial, its other (the sum of all previous)
// int fact(int i){
//     if(i==1){
//         return 1;
//     }
//     return(fact(i-1)*i);
// }
// int fact(int i){
//     //just the sum of all numbers until n
//     //cout<<"HI";
//         //!attention, int, il faut toujours que ca soit des nombres entiers!
//     return (((i+1)*(i)));
// }
//!!!!! MAKE SURE YOU ARE USING LONG LONG INT
int main(){
    long long t, n;
    cin>>t;
    while(t--){
        cin>>n;
        long long i,j,k;
        vector<long long> arr(n,0);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        //if there is only one element on the entire array, then there is nothing
            //actually, i am mnaking sure that the first element doesnt appear all the time
        if(count(arr.begin(), arr.end(),arr[0])==n) {cout<<n*(n-1)<<"\n";}
        else {j=count(arr.begin(), arr.end(), arr[0]);
        k=count(arr.begin(), arr.end(), arr[arr.size()-1]);
        cout<<(k*j)*2<<"\n";}
    }
    return 0;
}
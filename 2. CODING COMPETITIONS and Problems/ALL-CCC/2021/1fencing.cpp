//I'll solve this problem, but also test my debugging techniques at the same time :laugh:
#include <bits/stdc++.h>
using namespace std;
// #define ll long long 
//although for types, it is better to use 
// typedef  double ll;
double area(double val, double h){
    return (val)*h/2;
}
int main(){
    int n,i;
    cin>>n;
    double arr[n],tmp, curr;
    cin>>tmp;
    for(i=0;i<n;i++){
        cin>>arr[i];
        curr=arr[i];
        arr[i]+=tmp;
        tmp=curr;
    } 
    double ans=0;
    for(i=0;i<n;i++){
        cin>>tmp;
        ans+=area(arr[i], tmp); 
    }
    //the fixed keyword means, "after the decimal"
        //without having mentioned it, they wanted to have exactly 1 digit after the decimal....????/
    cerr<<fixed<<setprecision(1)<<ans<<"\n";
    //cout and cerr both work!
    return 0;
}
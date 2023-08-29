#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n, j;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n-1;i++){cin>>j; arr[j-1]++;}
    cout<<(distance(arr, find(arr, arr+n, 0))+1);

    
    return 0;
}
//even better:
//!calculate the sum of all the elements inputed, then, calculate the sum of the n, through n(n+1)/2, cout the difference.
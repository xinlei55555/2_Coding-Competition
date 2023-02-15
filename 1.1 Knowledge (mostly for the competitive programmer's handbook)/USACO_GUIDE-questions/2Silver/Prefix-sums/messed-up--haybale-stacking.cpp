//I messed up, I should've been using differnece arrays

//!should be using difference arrays;

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     ifstream cin("stacking.in");
//     ofstream cout("stacking.out");
//     int n, k;
//     cin>>n>>k; 
//     int a,b, arr[n]={0};
    
//     while(k--){
//        cin>>a>>b;
       
//        arr[a]++,arr[b]++; 
//        //!~the b means I need to add an element to all the stacks before b!!!, not just the b stack...
//         //Instead, I can use a prefix sum, and add 1 to the last element of the range. 
//       //!I should use a difference array....;

       
//     }
//     sort(arr,arr+n);
//     cout<<(n%2==0? arr[n/2]: (arr[(n-1)/2]+arr[(n+1)/2])/2);
//     return 0;
// }
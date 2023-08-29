#include <bits/stdc++.h>
using namespace std;

// //!just brute force for every element
int n, sum=1, best=0;
int main(){
    cin>>n;int arr[n];
    //if(n==1) {cout<<1; return 0;}
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int i=0; (i)<n; i++){
            //error, my program did not add elements, when they were at the end, even though they are part of the answer
        //here, I start at 1, to account for the fact that my program is ignoring the current element
            //then, I can start at i-1 and at i+1, and compare with the previous element instead, thus limiting the possibility of out of bound comparisons
                //!I must not forget to break the loop, when I reach a dead end! Or, it will continue looping and add values!
        for(int j=i+1; (j)<n; j++) {if(arr[j]<=arr[j-1]) sum++; else break;} //cout<<arr[j]<<" "<<sum<<endl;}
        for(int j=i-1; (j)>=0; j--) if(arr[j]<=arr[j+1]) sum++; else break; //cout<<arr[j]<<" "<<sum<<endl;}
        best=max(best, sum);
        sum=1;
        //cout<<"HI "<<best<<endl;
    }
    cout<<best;
    return 0;
    }   
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main(){
    vector<ll> arr={1,2,3,4,5,12,123,1234,12345,123556,1234122};
    ll mid,left=0, right=arr.size();

    //!binary search to find an exact value;
    ll exact_value=2;
    //the first condition in the while loop will always be true...
    while(left<=right){
        //important to first calculate the jump between left and right, and then add it to left, instead of just doing the average, since that could overflow the given value
            //also, ceil or floor doesn't matter... as long as it is an int
        mid=ceil((right-left)/2)+left;
        if(arr[mid]==exact_value) {
            cout<<mid<<endl;
            break;
        }
        if(arr[mid]<exact_value){
            left=mid+1;
        }
        if(arr[mid]>exact_value){
            right=mid-1;
        }
    }   

    //!binary search to find the closest value that is under;
    ll target = 125; //targetting 123
    //start with closest as a negative number!      
    ll closest=-1;
    right=arr.size();
    left=0;
        //basically the same thing,but I loop through every possible log(2) n values, and then, I am able to determine that the closest left was the right value;
        //!important to set thet left!= right.
            //or else, I need to define +1 mid=(floor(right-left+1)/2)+left
    while(left<=right){
        mid=floor((right-left)/2)+left;

        if(arr[mid]<=target){
            //saving the closest INDEX;
            closest=max(mid, closest);

            left=mid+1;
        }
        if(arr[mid]>=target){
            right=mid-1;
        }
    }
    //only at the end can I cout the closest INDEX i found;
    cout<<closest;
    return 0;
}
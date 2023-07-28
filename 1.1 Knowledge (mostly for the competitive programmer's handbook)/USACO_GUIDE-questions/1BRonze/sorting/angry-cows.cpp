#include <bits/stdc++.h>

using namespace std;
//!passing an vector into a function, always by reference  (so that we don't need to recreate a value for the vector);
    //Note: If we do not want a function to modify a vector, we can pass it as a const reference also.
    //const vector<int> &arr
#define debug(x) #x<<": "<<x<<" "
int check_l(int i, vector<int> &arr, int rad, int idx, int curr){
    //!little error, what if, with one blow, I reach the end of the array? I should add the rest of the values to the curr (so idx-1)
    //cout<<arr[i]<<" "<<rad<<" "<<arr[idx]<<" A"<<curr<<"\n";
    if(!(arr.size()>idx)) {return curr;}
    else if(arr[idx]-arr[i]>rad) {
        //!faut que j'ajoute 1 a i, pour que ca puisse continuer
            //not add 1, you have where you currently are in the array
            //so, it would be idx-1 (if we change the value)
        if(idx-1!=i&&arr[idx]-arr[idx-1]<=rad+1) check_l(idx-1, arr, rad+1, idx, curr);
        else {return curr;}
    }
    else if(arr[idx]-arr[i]<=rad) check_l(i, arr, rad, idx+1, curr+1);
}
int check_r(int i, vector<int> &arr, int rad, int idx, int curr){
    if(!(0<=idx)) {return curr;}
    else if(arr[i]-arr[idx]>rad) {
        //same goes for the other way
            //but idx+1 cannot be equal to i, or else, it'll start skipping radii
        if(idx+1!=i&&arr[idx]-arr[idx+1]<=rad+1) check_r(idx+1, arr, rad+1, idx, curr);
        
        else{//cout<<i<<" "<<rad<<" "<<idx<<" B"<<curr<<"\n";
        return curr;}
    }
    else if(arr[i]-arr[idx]<=rad) check_r(i, arr, rad, idx-1, curr+1);    
}
int main(){
    ofstream fout("angry.out");
    ifstream cin ("angry.in");
    int i,n;
    cin>>n;
    vector<int>arr(n,0);
    //cout<<arr.size();
    for(i=0;i<n;cin>>arr[i++]);
    sort(arr.begin(), arr.end());
    for(auto x: arr)cout<<x<<" ";
    int ans=0;
    for(i=0;i<n;i++){
        ans=max((check_l(i, arr, 1, i+1, 0)+check_r(i, arr, 1, i-1,0)+1), ans);
        cout<<debug(i)<<check_l(i, arr, 1, i+1, 0)<<" "<<check_r(i, arr, 1, i-1,0)<<" "<<ans<<"\n";
    }
    fout<<ans;
    return 0;
}
//!basically, the implementation sucks!!!!!
// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//     ifstream cin("angry.in");
//     ofstream fout("angry.out");
//     int n,i,j;cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++) cin>>arr[i];
//     sort(arr, arr+n);//for(auto x: arr) cout<<x<<" ";
//     int rad, ans=0, curr;
//     bool added;
//     for(i=0;i<n;i++){
//         curr=1;
//         rad=1;
//         j=i+1;//!always debug by hand.
//         added=false;
//         while(j<n){
//             if(arr[j]<=arr[i]+rad&&j<n){
//                 added=false;
//                 curr++;
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<rad<<" "<<curr<<"\n";
//                 j++;
//             }
//             //I must create a boolean, so it doesn't add, infinitely, values to the radian.
//             else if(!added){rad++;
//             added=true;}
//             //j++;//!
//             else if (added) break;
            
//         }
//         j=i-1;//!
//         //!godammnit, don't forget to reset the radiu;
//         rad=1;
//         added=false;
//         while(j>=0){
//             //!here, I gotta repeat the condition of the loop twice, in the inner and outer loop!
//                 //as long as the values fit in the given interval, it continues the loop!
//             if(arr[j]>=arr[i]-rad&&j>=0){
//                 added=false;
//                 curr++;
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<rad<<" "<<curr<<"\n";

//                 //I am going the other way, don't forget to remove j!
//                 j--;
//             }
//             else if(!added){rad++; added=true;
//             //j--;//!
//             }
//             else if(added) break;
//         }
//         ans=max(ans, curr);
//     }
//     fout<<ans;
//     return 0;
// }       // cout<<"HI";
        // curr=1;
        // //somehow, they don't count the first cow blowed itself.. 
        //     //error! You are not exploding one hay at the time, you are exploding A BUNCH at a time.   
        // num=1;
        // j=i;
        // while(j>=0){
        //     k=0;
        //     while(j-k>=0&&k<curr){
        //             //don't break to save some time!\

                //!I think the problem, is that I am comparing too many things, the logic was just wrong.
        //         if(arr[j]-arr[j-k]<=curr){num++; }
        //         k++;//continue;}
        //         //break;
        //         cout<<k<<"Helllloo\n";
        //     }
        //     cout<<"BRUH"<<curr<<" "<<j<<"\n";
        //     j-=curr;pre1=curr;curr++;
        //     // //if doesn't work...
        //     // break;
        // }
        // //properly reset the values!
        // curr=1;
        // j=i;
        // while(j<n){
        //     k=0;
        //     while(j+k<n&&k<curr){
        //         if(arr[j+k]-arr[j]<=curr){num++; }
        //         k++;
        //         cout<<k<<"Hulo\n";

        //     }
        //     j+=curr;pre2=curr;curr++;//if(abs(arr[j]-arr[j+1])<=curr){num++;j+=curr++;continue;}
        // }
        // ans=max(num, ans);
        // cout<<ans<<"\n";

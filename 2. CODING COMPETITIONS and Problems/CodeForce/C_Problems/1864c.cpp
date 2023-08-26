#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr={1,2};
        int in=1, sum=2; bool val=false;
        while(sum<n){
            // arr.push_back(i);
            if(sum+(in*2)<=n) {in*=2; sum+=in;arr.push_back(sum);}
            // if(sum+in==n) {in=in;}
            else{
                if(!val){in*=2;val=true;}
                in/=2;
                if(sum+(in)<=n){sum+=in;arr.push_back(sum);}
                
            }            
        }
        cout<<arr.size()<<"\n";
        for(int i=arr.size()-1; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
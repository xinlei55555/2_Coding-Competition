#include <iostream>

using namespace std;
int arr[100001], n, ans=1;
    //ok, the thing is that the array must start at ans=1 (there is always one group)
main(){
    cin>>n;
    cin>>arr[0];    
    for(int i=1; i<n; i++) {cin>>arr[i]; if(arr[i-1]!=arr[i]) ans++;}
    cout<<ans;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long i, n;
    cin>>n;
    vector<long long> arr (n);
    long long med, ans=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        
            // sum+=arr[i]; 
    }
    //sum/=n;
    sort(arr.begin(), arr.end());
    med=arr[n/2];
    //instead of the average, you should be looking for the median.
    for(auto x:arr) ans+=abs(med-x);//ans+=abs(sum-x);
    cout<<ans;
    return 0;
}
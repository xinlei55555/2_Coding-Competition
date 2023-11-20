#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";
int main(){
    int t; cin>>t;
    while(t--){
        ll x, k; cin>>x>>k;
        for(int i=0;i<=50; i++){
            ll n = x+i;
            ll sum = 0, m;
            while(n>0){    
                m=n%10;    
                sum=sum+m;
                // numbers.push_back(m);
                //divide the number by 10    
                n=n/10; 
                // cerr<<sum<<"\n";   
            }
            if(sum%k==0) {cout<<x+i<<"\n";break;}
        }
        // //you want to find the smallest number that has divisor of n.
        // // ll sum=0;
        // // for(int i=10;i<=x*10;i*=10){
        // //     ll tmp = ((x%i) - x%(i/10));
        // //     cerr<<tmp<<"\n";
        // //     tmp += sum;
            
        // // }
        // ll n = x, m;
        // //number is stored for lower digit to largest digit
        // vector<ll> numbers;
         
        // for(auto x: numbers) debug(x)
        // ll sum=0;
        // for(auto x: numbers) sum+= x;
        // vector<ll> answer;
        // ll left = sum % k;
        // cerr<<sum<<" "<<k<<" "<<left<<"\n";
        // for(ll number: numbers){
        //     ll digit = number;
        //     digit += min(9-number, left);
        //     left -= (number - digit);
        //     answer.push_back(digit);
        // }
        // for(int i=answer.size()-1;i>=0;i--){
        //     cout<<answer[i];
        // }
        // cout<<"\n";
        
         
    }
    return 0;
}
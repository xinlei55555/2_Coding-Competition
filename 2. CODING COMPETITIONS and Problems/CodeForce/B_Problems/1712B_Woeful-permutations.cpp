#include <bits/stdc++.h>

using namespace std;

//the LCM is, in french, le "plus petit commun multiple"
int main(){
    ios::sync_with_stdio(0);
    int t, n, val;//, answer,lcm;
    // vector<int> perms;
    cin>>t;
    int num;
    for(int i=0; i<t; i++){
        // perms={};
        cin>>n;
        // answer=0;
        // for(int j=0; j<n; j++){
        //     perms.push_back(j+1);
        // // }
            
            // for(int j=1; j+2<=n; j++){
                // while true, means that something in the code has to break it, it doesn't stop....
                
                // lcm = 10000000;
                // num = 1;
                // finding the lcm; -- >interesting. If I displace the intial array by +1 for every number, and I calculate the LCM,I can be assured the LCM is the product of both!
                // while(1){
                //     if(num%(j+2)==0 && num%(j+1)==0){
                //         lcm = min(num, lcm);
                //         break;
                //     }
                //     num++;
                // }

                // lcm=j*(j+1);
                // answer+=lcm;
                
            //}
    //DID not work, instead I think I must like, make a switch between every two numbers.
    //-->always start from test cases and see what it does, if there is a pattern to be coded, don't rush!
        //ex: 3 -- 1 3 2
            // 4 --- 2 1 4 3
            //5 --- 1 3 2 5 4
            vector<int> nums = {};
            if(n==1) cout<<1<<"\n";
            else if(n==2) cout<<2<<" "<<1<<"\n";
            else if(n%2 != 0) {
                nums = {1,3,2};  
            }
            else nums={2,1,4};
            for(int j=3; j<n; j++){
                nums.push_back(nums[j-2]+2);
            }
            for(auto x:nums){
                cout<<x<<" ";
            }
            cout<<"\n";
        //!Damn, they are asking me to print the permutation, not the answer!

        
    }
    return 0;
}
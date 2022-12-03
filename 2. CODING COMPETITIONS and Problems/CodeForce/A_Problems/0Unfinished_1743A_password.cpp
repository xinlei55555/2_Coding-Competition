#include <bits/stdc++.h>
using namespace std;

main(){
    //always declare the size of the array.
    int t,n, val,arr[10]={0,0,0,0,0,0,0,0,0};
    int ar[8]={1,3,6,10,15,21,28,36};
    for(cin>>t;t--;){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>val;
            arr[i]=val;
        }
        //it's 8-n, not n-8!!!!!
            //this gave me weird values
        cout<<ar[8-n]*6<<"\n";
    }
}

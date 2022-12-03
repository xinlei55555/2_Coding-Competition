//!I didn't finish this code, due to the lack of clarity of the quetsion itself... (//*I DON"T KNOW WHAT HE IS TALKING ABT!)
#include <bits/stdc++.h>
using namespace std;
//note that I can always declare stuff before.
int n;
//for good code, better write void

void o(){
    cout<<"HI\n";
}
int main(){
    //ok, this is kind of cool, it will call the function o() as many times as the for has cin inside
    // for(cin>>n;cin>>n;o());
    //this achieves the same purpose!
    while(cin>>n) o();
    return 0;
}

//!COol solutionL
// #include<bits/stdc++.h>
// using namespace std;
// int n,d[101],a[101];
// void o(){
//   int i;
//   for(i=1;i<=n;++i)cin>>d[i];
//   for(i=1;i<=n;++i)
//     if(a[i-1]<d[i]||!a[i-1]||!d[i])a[i]=a[i-1]+d[i];
//   else{puts("-1");return;}
//note that he is printing the answers as he goes!
//   for(i=1;i<=n;++i)cout<<a[i]<<' ';cout<<'\n';
// }
// main(){
//   for(cin>>n;cin>>n;o());
// }


// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     int t,n,val;
//     // bool skipped=false;
//     cin>>t;
//     // for(int i=0; i<t; i++){
//     //     cin>>n;
//     //     int arr[n];
//     //     int ans[n];
//     //     for(int j=0; j<n; j++){
//     //         cin>>val;
//     //         arr[j]=val;
//     //     }   
//     //     ans[0]=arr[0];
//     //     for(int i=1; i<n; i++){

//     //     }

//     // }

//     //lesson 2: easier to just have two different arrays, instead of playing with one array TT
//     for(int i=0; i<t; i++){
//         // cout<<"HI";
//         cin>>n;
//         int arr[n];
//         // cout<<n<<t;
//         for(int j=0; j<n;j++){
//             cin>>val;
//             if(j==0){
//                 arr[0] = val;
//                 val=arr[0];
//             }
//             else {
//                 //the array will have two possible values if the arr[j-1]>val
//                 if(abs(arr[j-1])>val){
//                     cout<<-1<<"\n";
//                 //     skipped=true;
//                 //     break;          
//                 }
//                 //the previous number, if negative, has to appear positive, but is negative
//                 arr[j]= val-arr[j-1];
//                 val=arr[j];
//                 cout<<arr[j];
//             }
//             // cin>>val;
//             // arr[j]=abs(val-);
//         }
//         cout<<"\n";
//         //lesson1: learn how to cout an array
//             //if skipped is false

//         //!lesson 2: i could cout every element, one at the time, instead of printing everything at the end!
//         // if(!skipped){
//         //     for(auto x: arr){ 
//         //         cout<<x<<" ";
//         //         cout<<"\n";
//         //         cout<<abs(x)<<" ";
//         //         }
//         //     skipped=false;
//         // } 
            
//         cout<<"\n";
//     }

//     return 0;
// }
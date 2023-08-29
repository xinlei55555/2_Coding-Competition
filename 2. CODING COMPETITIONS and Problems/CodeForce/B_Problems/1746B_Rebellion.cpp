#include <bits/stdc++.h>
using namespace std;

int main(){
//!my own definition:
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   //always go safe and include more elements than needed
    int t ,a[100100], b[100010];
    for(cin>>t; t--;){
        int i=0,n, ans=0;
        cin>>n;
        for(i; i<n; i++) {cin>>a[i]; b[i]=a[i];}
        sort(a, a+n);
        for(i=0; i<n; i++) {
            if(b[i]&&!a[i]) ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;

}
//!other people
//     ios_base:: sync_with_stdio(0);
//     cin.tie(0);

//     int a[10001], t;
//     for(cin>>t; t--;){
// 		int n,i,s=0,ans=0;cin>>n;
// 		for (i=1;i<=n;i++) {cin>>a[i];s+=a[i];}
//         //here, s represents the number of 1s;
//         cout<<s;
//             //thus, this loop will stop when the value of i is equal to n and could also stop if the number of elements remaining is smaller than the number of 1.
//                 //indeed, if the number of ones is bigger than the number of elements remaining, then this means that the elements past 
//                 //Ex: 1 1 1 1 0 0 0  , here, at the 3rd element, it would break, and would cout<<3;         since there are 4 elements remaining, but only 4 1s, that means that there are a max of 3 elements that you could change. 
//                     //(n- (s) = number of 0s, while s =  number of 1s;  the first time he looped, he registered the number of ones)
//                     //the second time, he is counting the number of 1s, but ending at the max element that could change.
// 		for (i=1;i<=n && s<=n-i;i++){
//             if(a[i])
//             {
//                 //this will only add to answer if the value is a 1
//                 ans++;
//             }
//             cout<<i<<" "<<ans<<" "<<n<<" \n";
//         }
// 		cout<<ans<<endl;
//         //the guy still declares his elements inside the loop, ig it is faster to run
// //! here are the core assumptions about this question
//     //* 2. at the end, if the string ends with 1s, then, all the ones are insignificant
//         //~how can i know that we have reached that point?
//             //a guy is keeping track of all the 1 that have appeared, by taking their sum. 
//             //When the sum of those numbers becomes bigger than the number of element left (n-1), that means that there are no more interesting numbers
        


//         //another method:
// /*cin>>t; while(t--){c=0;
//   cin>>n; int a[n],b[n];
//   for(int i=0;i<n;i++){cin>>a[i]; b[i]=a[i];} sort(a,a+n);
//   for(int i=0;i<n;i++)if(a[i]&&!b[i])c++;
//   cout<<c<<endl;
// }*/
//         //! the guy upward decided to keep two arrays.
//             //the first one would be the optimal array (all sorted)
//             //the second array is the array that is changed. if the element at the first array is a 1, and the element in the sorted array is a 0, then he adds a one to the sum (and the thing is that he'll be adding in pairs.).










//         //first time I loop through the array, I can keep the sum of the ENTIRE array.
//             //second time, I can stop looping as soon as the sum 
//         // cin>>n;sum=0; 
//         // for(int i=0; i<n; i++){
//         //     cin>>a[i];
//         //     if(i==0 &&a[i]==1) tmp=0;
//         //     if(a[i]==0){
//         //         sum+=(i-tmp);
//         //         tmp=i;
//         //     }
//         // }
        
//    }
//     return 0;
// }
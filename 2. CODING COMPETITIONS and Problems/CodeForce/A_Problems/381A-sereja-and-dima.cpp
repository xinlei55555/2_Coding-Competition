#include <bits/stdc++.h>

using namespace std;
//!i found this solution, and it is really interesting
    //for the answer, he simply initialized a points array, with 2 elements. 
    //this is clever, because, when combined with the initial value of f, makes that you can alternate the fullfilling of the elements inthe array, without having to use %=2
        //thus, here, I set f to start with 1, since I will want it to fill the 0th element first.
            //if I had 3 elements, I could use the same principle, but with an array of 3, thus by initializing an array of a[3], and then, a[f=2-f]
int n, i, f=1, points[2];
    //I also initialized a value i=0, which will keep track of the first value that we are at rn

main(){
//also, here, having an array of n elements exactly will be helpful with our calling (I don't need to keep in check the last index)
    cin>>n;int arr[n];
    for(i=0;i<n; i++)cin>>arr[i];
    //*Here, I am using the trick to determine which element of points i will be adding; (with the f[thingy])
        //then, i will be comparing the value AND updating the extreme's indexes to fit
    i=0;
    n-=1;
    //here, it will input using the value of i, or n
    for(int j=0; j<sizeof(arr)/sizeof(int); j++) points[f=1-f]+=arr[arr[i]>arr[n]?i++:n--];

    // for(int i=0; i<n; i++){cin>>a;k.push_back(a);}
    // for(int i=0; i<n; i++){if(i%2==0){a=max(k[f], k[n-1]); s+=a;}else{d+=max(k[i], k[n-(i+1)]);}}
    //ok, not that easy, the first one to pick will win, but the way they pick is not the same.
    cout<<points[0]<<" "<<points[1];
}
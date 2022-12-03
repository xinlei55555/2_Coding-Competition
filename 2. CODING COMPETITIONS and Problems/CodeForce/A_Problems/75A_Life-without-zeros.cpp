#include <bits/stdc++.h>
using namespace std;

//ok, thats the problem, casting to string:
    //string s=to_string(42)
int main(){
    int s1, s2, sum;
    string s3, s4, ssum;
    cin>>s1>>s2;
    sum=s1+s2;
    ssum=to_string(sum);
    ssum.erase(remove(ssum.begin(), ssum.end(), '0'), ssum.end());
    // for(auto x: ssum) s4.push_back(x);
    s3=to_string(s1);
    s4=to_string(s2);
    // for(auto x: s1) if(x!='0') s3.push_back(x);
    // for(auto x: s2) if(x!='0') s4.push_back(x);
    s3.erase(remove(s3.begin(), s3.end(), '0'), s3.end());
    s4.erase(remove(s4.begin(), s4.end(), '0'), s4.end());
    //weirdly, the remove function does not take into account the last element
    // if(s3.back()=='0') s3.pop_back();
    // if(s4.back()=='0') s4.pop_back();
    // if(ssum.back()=='0') ssum.pop_back();

    s1=stoi(s3);
    s2=stoi(s4);
    sum=stoi(ssum);
    if(s1+s2 == sum) cout<<"YES";
    else cout<<"NO";
    return 0;
}

//!other solution:
//https://slaystudy.com/c-c-program-to-remove-all-zeros-from-a-number/  
    //basically, we are looking at each value, %(10*value that we are at)
// #include <iostream>
// using namespace std;
// int n,y,z,i;
// int nozero(int x1){
// int m=1, k=0, x=0;
// while(x1>0){
// k=x1%10;
// x=x+k*m;
// if(k!=0) m=m*10;
// x1=x1/10;
 
// }
// return x;
// }
// main(){
// cin>>y>>z;
// n=y+z;
// if(nozero(y)+nozero(z)==nozero(n)) cout<<"YES";
// else cout<<"NO";
 
 
// }
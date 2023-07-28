#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x;

vector<vector<int>> all_sets={{}};
// vector<int> generating(vector<int>& ans, int curr){
    
    
// }
int main(){
    int i,n; //cin>>n;
    vector<int> arr={1,2,3,4,5,6,788,1213};

    arr.resize(5);
    for(auto x:arr) cout<<x;

    // for(i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    auto x=upper_bound(arr.begin(), arr.end(), 1213);
    i= distance(arr.begin(),x);
    debug(i) //8
    bool val= x==arr.end();
    debug(val) // true, the value of x is arr.end()

    x=lower_bound(arr.begin(), arr.end(), 0);
    i=distance(arr.begin(),x);
    debug(i) //0
    val= x==arr.end();
    debug(val) //0 (false)
    return 0;
}
// int test(int hi){
//     int arr[3];
//     cin>>arr[1]>>arr[2]>>arr[3];
//     for(auto x:arr) cout<<x<<" ";
//     //cout<<hi<<" ";
//     if(hi>4) {cout<<hi;return hi;}
//     else test(hi+1);
// }
// struct Test{
//     int hi;
//     int hello;
// };

// int main(){
//     unordered_map<int, int> hi;
//     hi[1]++;
//     cout<<hi[1];
//     unordered_map<long long, long long> hello;
//     hello[1]++;
//     cout<<hello[1];
    // int x = max({1,2,3,4});
    // cout<<x<<"\n";
    // unordered_set<int> hi = {1,2,3,4,5,6787,345,2462,24525,24634};
    // cout<<"HI";
    // for(auto &x:hi) hi.erase(2);
    // cout<<hi.size(); 

    // string s;
    // int sum;
    // int ans=0;
    // for(int i=2000;i<=2023; i++){
    //     sum=0;s=to_string(i);  
    //     for(auto x:s)sum+=x-'0';
    //     if(i%sum==0) {cout<<i;ans++;}
    // }
    // debug(ans);
    // set<int> m31={1,3,5,7,8,10,12};
    // set<int> m30={4,6,9,11};
    // int lim;
    // ans=0;
    // for(int i=2011;i<10000; i++){
    //     for(int j=1;j<=12;j++){
    //         if(j==2) lim=28;
    //         else if(m31.find(j)!=m31.end()) lim=31;
    //         else lim=30;
    //         for(int k=1; k<=lim;k++){
    //             if(i==k*100+j) {ans++; cout<<i<<" "; }
    //         }
    //     }
    // }
    // cout<<"\n";
    // int volume;
    // string vl;
    // for(int i=0;i<1000; i++){
    //     volume=i*i*i;
    //     vl=to_string(volume);
    //     if(vl[1]=='7'&&vl[3]=='7'&&vl[5]=='7'){
    //         cout<<i<<" ";
    //     }
    // }
    
    //cout<<"*";
    //int a;
    //debug(a)
    // cout<<test(0);
//     return 0;
// }




/*
int main(){
    unordered_map<string, set<string>> a;
    a.insert({"hi", {"hello"}});
    a.insert({"hi",{"ok"}});
    cout<<a["hi"].size();
    for(auto x:a["hi"]) cout<<x;
    cout<<"-------------";

    vector<int> hello(5);
    for(auto x: hello) cout<<x<<" ";
    map<int, set<int>>hi;
    hi.insert({1, {1,3}});
    if((hi[2].find(3))!=hi[2].end()){
        cout<<"HI";
    }
    cout<<endl;

    set<string> hoo;
    hoo.insert({"hi","hello"});
    for(auto x:hoo) cout<<x;

}
*/

// // int main(){
// //     vector<tuple<long long, long long, char>> hi;
// //     hi.push_back(tuple(1,2,'a'));
// //     for(auto x:hi) for(int i=0; i<3; i++) cout<<get<i>(x);

    
// //     return 0;
// // }

    
// //     for(auto x:v) cout<<x;
// //     int x=5;
// //     x-=4;
// // // !debugging efficiently
// // //  THuS!! when I use it on something like codeforce, it won't register it!
// //     cerr<<"x is "<<x<<"\n";
 
// //    cout<<"HI";
// //     bool hi=true;
// //     if(hi==true){
// //         cout<<"HI";
// //     }
// //     if(hi==0){
// //         cout<<"I";
// //     }
// //     return 0;
// }
// //!random problem proposed, where I have to determine the integers I must add to a certain integer to make it divisible
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     string number="2";
// //     double num;
// //     for(int i=2; i<100; i++){
// //         for(int j=1; j<=2; j++){
// //             number=to_string(j)+number;
// //             num=stoi(number);
// //             int val = pow(2,i);
// //             *here, I calculated the power in a separate function, since pow(something, something) returns a double, and I wanted to convert it to int.
// //              *here, I wrote the equivalent of the modulo function, but for doubles
// //             if(abs(round(num/val)-(num/val))<=0.1) cout<<num;
// //             else cout<<"bruh";
// //             cout<<"\n";
// //         }

// //     }
// //     return 0;
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     vector<int> input;
// //     int el;
// //     for(int i=0; i<n; i++){
// //         cin>>el;
// //         input.push_back(el);
// //     }
// //     for(int i=0; i<input.size(); i++){
// //         for(int j=i; j<input.size(); j++){
// //             cout<<input[j];
// //         }
// //         cout<<"\n";
// //     }
// //     return 0;
// // }
// // int main(){
// //     cout<<"hhelllo";
// //     char a = 'a';
// //     int ia = a-'a';
// //     cout<<ia;

// // }


// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     cout<<"HALLO RUKUN!"<<endl;3
// //     for(int a = 0; a<3; a++){
// //         for(int b = 0; b<7; b++){
// //             for(int c = 0; c<24; c++){
// //                 for(int d = 0; d<263; d++){
// //                     if((a*b*c*d == (a*a + b*b + c*c + d*d))&&(a<b)&&(b<c)&&(c<d)){
// //                         cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
// //                     }

// //                 }
// //             }
// //         }
// //     }    
// // return 0;}


// // ;;'#include <bits/stdc++.h>

// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;

// //     int value;
// //     map<int, int> answers;
// //     for(int i=0; i<n; i++){
// //         cin>>value;
// //         if(answers[value] == 0){
// //             answers.insert(pair<value, 1>);
// //         }
// //         else{
// //             answers[value] += 1;
// //         }
        
// //     }

// //     int smallest = 1001;
// //     int smallest_val;
// //     int biggest = 0;
// //     int biggest_val;
// //     for(auto i = answers.begin(); i != answers.end(); i++){
// //         if((i->second)>biggest) {
// //             biggest = i->second;
// //             biggest_val = i->first;
// //         }
// //         if((i->second)<smallest) {
// //             smallest = i->second;
// //             smallest_val = i->first;
// //         }
// //         if((i->second)>=biggest) {
// //             biggest = i->second;
// //             if(biggest_val < i->first) biggest_val = i->first;
// //         }
// //         if((i->second)<=smallest) {
// //             smallest = i->second;
// //             if(smallest_val > i->first) smallest_val = i->first;
// //         }
// //     }
// //     cout<<(biggest_val - smallest_val);
// //     return 0;

// // }


// // //n number of fingers
// // // int main(){
// // //     vector<int> poss = {1, 1, 2, 2, 3, 3, 3, 2, 2, 1, 1};
// // //don't forget the semicolon
// // //     int n;
// // //     cin>>n;
// // //     cout<<poss[n];

// // //     return 0;
// // // }


// // //Sum Game
// // // int main(){
// // //     vector<int> swifts= {};
// // //     vector<int> semaphores = {};
// // //     int n;
// // //     cin>>n;
    
// // //     int temp =0;
// // //     int current_sum=0;
// // //     for(int i = 0; i<n; i++){
// // //         cin>>temp;
// // //         current_sum += temp;
// // //         swifts.push_back(current_sum);
// // //     }

// // //     temp = 0;
// // //     current_sum = 0;
// // //     for(int i = 0; i<n; i++){
// // //         cin>>temp;
// // //         current_sum += temp;
// // //         semaphores.push_back(current_sum);
// // //     }
    
    
// // //     for(int i = swifts.size()-1; i>=0; i--){
// // //         if(swifts[i] == semaphores[i]){
// // //             cout<<(i+1);
// // //             return 0;
// // //         }
// // //         //OK WOW my error is that i did that with the i == 1, instead of i == 0, so even if they had same value at the second game, it would give 0
// // //         if(i == 0){
// // //             cout<<0;
// // //             return 0;
// // //         }
// // //     }

    

// // //     return 0;
// // // }
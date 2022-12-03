#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"*";
    return 0;
}




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
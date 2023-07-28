//am trying to solve it recursively... although there is probably a solution!
//!BRUH, we are looking for ways to place 2 knights... 2 knights, not a whole board of knights.


#include <bits/stdc++.h>
//there is a math solution
using namespace std;
int main(){
   long long a, b=0;
   cin>>a;
   for(long long i=1; i<=a; i++){
    //https://www.youtube.com/watch?v=RlpM5N-ttcU&ab_channel=SaiAnishMalla
        //basically, i start by counting how many values of different positionning of knights you can have (you can place it in n(n-1), and then, you divide by two, since you do not want repeating schemes
        //then, you have two check how may combinations DON"T work, basically, in this case, we must count how many 2x3 are present in this. Since, for every 2x3, there is 2 ways a knight could be placed in which they would attack each otehr
    cout<<max(((i*i)*((i)*(i)-1))/2-(4*(i-2)*(i-1)), b)<<"\n";
    //cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
    
   }

   

}

// #include <bits/stdc++.h>
// using namespace std;

// //! I would change tactic. I would, instead, have a board, and slowly fill it with pieces. My goal would be to have as many pieces as possible...


// int n, ans=0;
// bool check(int row,int i, vector<vector<int>>& arr){
//     for(auto x:arr) {for(auto y:x) cout<<y<<" "; cout<<"\n";}
//     //~I am only verifying for the previous rows, since the next rows, there is nothing...
//     cerr<<"HI";
//     if(arr[row-1][i-2]!=1&&arr[row-2][i-1]!=1&&arr[row-1][i+2]!=1&&arr[row-2][i+1]!=1) { cout<<"HI"; return false;}
//     return true;
// }
// void solve(int row, vector<vector<int>>& arr){
//     if(row==n){ans++; return;}
//     for(int i=0; i<n; i++){
//     //knights are not the same as queens, there can be more than one knight per row
//     cout<<row<<" "<<ans<<"\n";
//         arr[row][i]=1;
//         if(!check(row, i, arr)) continue;
//         solve(row+1, arr);
//     }

// }
// int main(){
//     int row=0;cin>>n;
//     vector<vector<int>> arr;vector<int>a(n,0);
//     for(int i=0; i<n; i++, arr.push_back(a));
//     solve(row,arr);
//     cout<<ans;
//     return 0;
// }
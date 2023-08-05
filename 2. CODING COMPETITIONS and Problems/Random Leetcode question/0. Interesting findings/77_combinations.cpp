#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(x) cerr<<#x<<" "<<x<<"\n";

//!I could've also done backtracking, which is creating ALL the possible solutions (using recursion), and then, stopping the solutions that repeat a number

class Solution{
public:
    vector<vector<int>> answer, tmp;vector<int> temp; int init;
    void initial_add(int n){
        for(int i=1 ;i<=n;i++) answer.push_back({i});
    }
    void add_el(int n){
        tmp=answer;
        answer={};
        for(int i=0;i<tmp.size(); i++){
            //use the last element as the first element to iterate from.
            init = tmp[i][tmp[i].size()-1];
            temp={};
            for(int j=init+1;j<=n;j++){
                temp=tmp[i];
                temp.push_back(j);
                answer.push_back(temp);
            }
        }

    }
    vector<vector<int>> combine(int n, int k){
        initial_add(n);
        for(int i=1;i<k;i++){
            add_el(n);
        }
        return answer;
    }

};


//time-limit exceeded, instead, i'll just use vectors.
class Solution1{
public:
    set<set<ll>> answer ={{}};
    set<set<ll>> tmp;
    set<ll> nums;
    void add_digit(ll n){
        tmp=answer;
        //I gotta define answer as an empty set, or else seq:answer won't run anything.
        for(auto seq:answer){
            for(int i=1;i<=n;i++){
                nums=seq;
                nums.insert(i);
                tmp.insert(nums);
            }
        }
        answer=tmp;
    }
    vector<vector<int>> combine(int n, int k){
        for(int i=1;i<=k;i++){
            add_digit(n);
        }
        vector<vector<int>> vec_ans={};
        ll i=0;
        for(auto ans: answer) {
            if(ans.size()!=k) continue;
            vec_ans.push_back({});
            for(auto x:ans){
                vec_ans[i].push_back(x); cout<<x<<" ";
            }
            i++;cout<<endl;
        }
        return vec_ans;
    }
};

int main(){
    ll n, k;
    cin>>n>>k;
    Solution solution;
    vector<vector<int>> hi = solution.combine(n, k);
    return 0;
}
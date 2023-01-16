#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
struct Employee{
    string n;
    int s;

};
int main() {
    int q, val;
    Employee *hi=new Employee;
    cin>>hi->n>>hi->s;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>val;
        if(val==1){
            cout<<hi->n<<"\n";
        }
        if(val==2){
            cout<<hi->s<<"\n";
        }
        if(val==3){
            cin>>val;
            hi->s+=val;
            cout<<hi->s<<"\n";
        }
    } 
    return 0;
}

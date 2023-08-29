#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> my_vector = {1,2,3,4};
    auto x = my_vector.find(my_vector.begin(), my_vector.end(), 4);
    cout<<x;
    return 0;
}
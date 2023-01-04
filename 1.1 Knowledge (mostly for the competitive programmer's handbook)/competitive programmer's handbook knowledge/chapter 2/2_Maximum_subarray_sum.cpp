//page 23 of the programmer's handbook
//note, here is a way to get the maximum out of three or more values using {}:
// int x = max({1,2,3});
// cout<<x<<"\n";

#include<bits/stdc++.h>

using namespace std;
int first_method(vector<int> array){
//O(n^3)
//To help myself, I have defined here how the loops would display the values
//{1,2,3,4} = {{1}, {1,2}, {1, 2, 3}, {1, 2, 3, 4}, {2}, {2, 3}, {2, 3, 4}, {3}, {3, 4}, {4}}
    int answer = 0;
    //ok, basically, I have two indexes. One (i)that sets the first element  and one (j) that sets the last element
    for(int i=0; i<array.size(); i++){
        for(int j=i; j<array.size(); j++){
            int temp_sum=0;
        //then, I loop through all the continuous possibilities
            //the thing with this, is that it RECALCULATES the same sums over and over again, but only adds the last new digit
            for(int k=i; k<=j; k++){
                temp_sum+=array[k]; 
            }
        //save the largest sum
            //if(temp_sum>answer) answer=temp_sum;
            answer = max(temp_sum, answer);
        }
    }
    return answer;
}

int second_method(vector<int> array){
//O(n^2)
    int answer = 0;
    //basically the same as earlier, but, instead of looping one last time to sum, I would sum while looping the second time.
    //so, i sets the first value
    for(int i=0; i<array.size(); i++){
        int temp_sum=0;
        //j loops through the rest of the values, one at the time
        for(int j=i; j<array.size(); j++){
            //and each time, we make this comparison
                //without necessarily looping through another time, we just add the value to the one previously found, and make the comparison
            temp_sum+=array[j];
            answer=max(temp_sum, answer);
        }
    }
    return answer;
}
int third_method(vector<int> array){
//O(n)
//We are thus comparing three elements and seeing which one is the max;
    //we compare the previous sum with the current_element
    //We then compare the previous LARGEST sum with the last two elements.
    int temp_sum,answer = 0;
    for(int i=0; i<array.size(); i++){
        //basically, if the current element that we are looking at is bigger than the previous temporary sum, then it's easier to just start a new temp_sum!
        temp_sum=max(temp_sum+=array[i], array[i]);
        answer=max(temp_sum, answer);
    }
    return answer;
}
int main(){
    vector<int> array;
    int elements;
    while(cin>>elements){
        array.push_back(elements); 
    }
    cout<<first_method(array)<<"\n";
    cout<<second_method(array)<<"\n";
    cout<<third_method(array)<<'\n';
    return 0;
}
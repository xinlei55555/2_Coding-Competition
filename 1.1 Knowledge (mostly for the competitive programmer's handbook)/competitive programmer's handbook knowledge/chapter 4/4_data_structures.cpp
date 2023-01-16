//!if any doubt, go check this website
    //https://cplusplus.com/reference/algorithm/

#include <bits/stdc++.h>

using namespace std;

int main(){
//!array
    //summing all the numbers in an array
    //accumulate(array_name , array_name+length , sum);
        //the length is the value of the INDEX
    int a_sum[] = {1,2,3,14,123,41,34,5};
    int sum = 0;
    sum = accumulate(a_sum, a_sum+5, sum);
    cout<<sum<<endl;
    //accumulate also works for vectors, just use a_sum.begin(), a.sum_begin()+n, where n is the number of elements we are looking at.

//creates an array of 100 zeros
    int zeros[100] ={0};
    for(auto x: zeros){
        cout<<x;
    }
    
    // finding elements in array:
                    //for array, the begin() and end() are functions, not methods
    //for my case, i sometimes had to use the following syntax:
    auto iterator = find(a_sum, a_sum+sizeof(a_sum)/sizeof(int), 1);
        //*previously, the a_sum ==> begin(a_sum), a_sum+<sizeof array> = end(sum), 
    if(find(begin(a_sum), end(a_sum), 1)!=end(a_sum)) cout<<"yes";
//!vectors!/
    //*great link: https:////iq.opengenus.org/ways-to-remove-elements-from-vector-cpp/
        //basically, remove is good to remove all element within a range, but it still only returns an iterator. Thus, the erase function is more powerful.
    //removing ALL instances of a certain value in a vector
    //v.remove(v.begin(), v.end(), <thingy> )
    vector<int> v100 = {1,2,3,6, 6, 3, 4, 41, 2, 234, 45, 4};
//*THIS IS THE ACTUAL WAY TO USE erase AND remove to remove ALL instances of an element, don't forget that erase also takes v.end()! 
    //remove(v100.begin(), v100.end(), 45);
    v100.erase(remove(v100.begin(), v100.end(), 45), v100.end());
        //*the remove function only returns an iterator to the last value NOT removed... 
            //*thus, remove will remove all the appearances of a certain value, except the last value...
    for(auto x:v100) cout<<x<<"\n";
    
    //testing the swap function
    vector<int> v_swap = {1,34,1,42,4,13,12,642};
    //*a function that reverses the order of a vector:
    for(int i=0; i<v_swap.size()/2; i++) swap(v_swap[i], v_swap[v_swap.size()-(i+1)]);
    for(auto x:v_swap) cout<<x<<" ";
    cout<<endl;

    //*summing all the element in a vector
    sum = 0;
    sum = accumulate(v_swap.begin(),v_swap.end(), sum);
    cout<<sum<<endl;

    //*multiplying all elements in a vector.
    int multiple = 1; //!The initial product needs to be 1, or else, the answer will be 0!!!
    multiple = accumulate(v_swap.begin(), v_swap.end(), multiple, multiplies<int>());
    cout<<"the multiplication of all elements of the previous array is"<<multiple;
    
    //*copying a subvector into another vector 
    vector<int> myVec={0,1,2,3,4,5,6,7,8,9,0,29,192,1923,49};
    vector<int>::const_iterator first = myVec.begin() + 10;
    vector<int>::const_iterator last = myVec.begin() + 13;
    vector<int> newVec(first, last);

   //*we can compare vectors, just like we would with strings!
    vector<int>a ={1,2,3};
    vector<int>b={1,2,3};
    cout<<(b==a);

    //*replacing all values of a vector by a certain value 
    std::vector<int> myVector(10);
    myVector.assign(myVector.size(),5);  // set all values to 5

    //*replacing only a certain range of values of a vector by a certain value
    fill(myVector.begin(), myVector.end(), 5);  // set all values to 5

    //*resizing a vector (where 5 is the size of the vector)
    myVector.resize(5);

    //you can also use the funciton isupper() and islower() to determine IF the letter is actually downwards of capital 
   //this function will return a non-zero value (not necessarily 0) if the char is indeed lower or upper case letter, else, it will return 0 (false) 
//!sets are rarely used, unless if the performance counts... (because the elements are always sorted.) and can thus find the values at O(logn) speed
/*
Storing order – The set stores the elements in sorted order.
Values Characteristics – All the elements in a set have unique values.
Values Nature – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
Search Technique – Sets follow the Binary search tree implementation.
Arranging order – The values in a set are unindexed.

Insertion of Elements – O(log N)
Deletion of Elements – O(log N)

some basic methods:
begin() – Returns an iterator to the first element in the set.
end() – Returns an iterator to the theoretical element that follows the last element in the set.
size() – Returns the number of elements in the set.
max_size() – Returns the maximum number of elements that the set can hold.
empty() – Returns whether the set is empty.
clear() - removes all elements from the sets
*/
//*important! always use unordered_set, unless the order is important, as this does significantly decrease the time efficiency
    //declaring sets;
    set<int> setname;
    set<int> val = {6,10,4,1, 5, 7, 8, 2};

    setname.insert(5);
    //iterating through a set (just like in any data_structure)
    for(auto& itr:setname){
        cout<<itr;
        //returns 5
    }
    cout<<"\n";
    for(auto x = val.begin(); x!=val.end(); x++){
        cout<<*x;
    }
    cout<<"\n";

    //counting the number of occurences of an element (although a set can only have a max of 1 occurence, so basically, max is 1)
    cout<<val.count(10)<<"\n";

    //erasing a value (or all the occurences of the value) in a set 
    val.erase(6);

    //erasing an element at a specific index:
    // val.erase((val.begin()+5)); ---> this doesn't work, see why later (in the iterator section)
    val.erase(val.find(5));
cout<<"-----------------------\n";
    for(auto x: val){
        if(x==8){
            val.erase(x);
            cout<<"BRUH!";
        }
    }
    for(auto x:val) cout<<x;
    //*other types of sets: multiset (basically setes that can contain mutiple times the same elements... useless)
    //unordered_set (basically the same, but unordered)

//!maps (check the other document)
//better use unordered maps

//!iterators and ranges
    //an iterator is ar variable that points to an element in a datastruture
    //iterator .begin() points to the first element in the data structure, and the iterator .end() points to the position after the last element.
        // Note the asymmetry in the iterators: s.begin() points to an element in the
        // data structure, while s.end() points outside the data structure. Thus, the range
        // defined by the iterators is half-open.

//for vector:
    vector<int> v3 = {1,2,31,23,1,3,1,4,21,41,3,1234,1,4123,4513,53,24};
    sort(v3.begin(), v3.end());
    for(auto x: v3) cout<<x<<" ";
    cout<<endl;
    reverse(v3.begin(), v3.end());
    for(auto x: v3) cout<<x<<" ";
    cout<<endl;
    random_shuffle(v3.begin(), v3.end());
    for(auto x: v3) cout<<x<<" ";
    cout<<endl;

//for array
    // //note: to get the size of an array, like it's number of elements, we use
        //     sizeof(array_in_question)/sizeof(the data type it contains)
        //     since sizeof returns the size of the bits
        //ex: sizeof(array)/sizeof(int)

    int array[] ={123234,24,1354134,14,123,41,4,14,31,4,124,1,5,135,1,5,13,54123,4};
    sort(array, (array+sizeof(array)));
    reverse(array, (array+sizeof(array)));
    random_shuffle(array, (array+sizeof(array)));

    //the element which the iteator points can be accessed by
    //      *itr
    //iterators can also be added to values
        //itr++ and itr-- work!
        //BUT itr + <int> only works for vector-iterators!

//!Another way of using arrays
    //*Since arrays are not supported when passing them into functions, you can always use a '
    std::array<int, 3> myArray = {1,2,3};
    //or just arrar<int, 3>
    cout<<"arrays!";
    for(auto x:myArray)cout<<x;

    

//!bitset arrays:
    //an array of only 1 and 0, that is memory-efficient
    bitset<10> s;  // other way: bitset<10> s(string("0010011010")); // from right to left
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0
    //returns the number of ones in the array
    cout<<s.count()<<"\n";

//we can even perform bit operations! (see the basic competitive programming file for more infos ;)
    bitset<10> a_bit_string(string("0010110110"));
    bitset<10> b_bit_string(string("1011011000"));
    cout << (a_bit_string&b_bit_string) << "\n"; // 0010010000
    cout << (a_bit_string|b_bit_string) << "\n"; // 1011111110
    cout << (a_bit_string^b_bit_string) << "\n"; // 1001101110

//?The rest is no so much useful haha.....
//!deque (a vector that can also push_front() and pop_front()) --> but it's slower...
    deque<int> d;
    d.push_back(5); // [5]
    d.push_back(2); // [5,2]
    d.push_front(3); // [3,5,2]
    d.pop_back(); // [3,5]
    d.pop_front(); // [5]

//!!stacks and queues are, from underlying structures, based on deques, and are thus slower than vectors...
//!stack
    /*A stack is a data structure that provides two O(1) time operations: adding an
element to the top, and removing an element from the top. It is only possible to
access the top element of a stack.*/
    //pop the last number to have been added
    stack<int> stack1;
    stack1.push(3);
    stack1.push(2);
    stack1.push(5);
    cout << stack1.top(); // 5
    stack1.pop();
    cout << stack1.top(); // 2

//!queues
    /*A queue also provides two O(1) time operations: adding an element to the end
of the queue, and removing the first element in the queue. It is only possible to
access the first and last element of a queue.*/
    //pops the first number to have been added
    queue<int> q1;
    q1.push(3);
    q1.push(2);
    q1.push(5);
    cout << q1.front(); // 3
    q1.pop();
    cout<<q1.front();

//!priority queue
    //can insert in O(logn) instead of O(n)
    //pops the biggest number all the time.
    priority_queue<int> q2;
    q2.push(3);
    q2.push(5);
    q2.push(7);
    q2.push(2);
    cout << q2.top() << "\n"; // 7
    q2.pop();
    cout << q2.top() << "\n"; // 5
    q2.pop();
    q2.push(6);
    cout << q2.top() << "\n"; // 6
    q2.pop();

    //if wanna remove smallest element instead:
    priority_queue<int,vector<int>,greater<int>> q;

//!Policy-based data-structures
    //structures that are not by default in c++, but are supported by gcc
    //see page 44 TT


    //another better way of looping:
    #include <bits/stdc++.h>
    //I already declare i=0;
    int i=0;
    int arr[5]={0,1,2,3,4};
        //here, i notice it will cout the value of i BEFORE ++
    for(i; i<5;) cout<<arr[i++];
    
    return 0;

    return 0;
}
#include<bits/stdc++.h>
#include <map>
//do not forget to include a map
using namespace std;

int main(){
    /* a map is a data structure that stores the values in an unorderly fashion, meaning that instead of having to loop through the entire array to find if a value exists O(n), we can see it in linear times O(logn) (it is NOT O(1) -->see next line)
        the data is, in fact sorted in a tree! (thus, to find the elements, it has to go through O(logn)) --> it usually stores stuff in ascending order (in a red-black tree, basically just like binary search!!!)
            O(1) search time would be for unordered maps!
    */
    
    //the syntax is  map<type, value> map_name
    //when we make something equal to, we basically do the same thing as if we were declaring a 2D vector
    map<char, int> mp = {
        {'T', 7},
        {'S', 8},
        {'a', 4}
    };
    
    // to access a value, we basically do as if it were an array, yet insetad of the index, we use the key.
    cout<<mp['T']<<endl;
    //prints 7

    //when key doesn't exist, it returns 0
    cout<<mp['I']<<endl;
    //prints 0

//!inserting can also be done more efficiently, check out the links below, but you can also use mp.insert({1, 1}); to insert a pair <int, int> (1,1)
    
    //*another way to insert
    unordered_map<int,int> pref;
    cin>>pref[0];
    //I just realized that in any unordered_map, the element at every other key starts at 0???
        //I don't need to do the if(exists...) pref[skdlfsdlk]++; else pref.insert({key, value});
        //I could just do pref[klsfjdl]++;
    cout<<pref[2]<<endl; //output 0
    pref[2]++;
    cout<<pref[2]<<endl; //output 1
    pref[2]=5;
    cout<<pref[2]<<endl; //output 5

    unordered_map<string, string> hi;
    hi["hello"]="hi";
    cout<<hi["hello"]<<endl; //ouputs "hi"
    cout<<hi["unknown"]<<endl; //outputs an empty space    
    


    //also can insert more than one pair of elements using mp.insert({{1,1}, {2,2}})
    mp.insert({{'O',1}, {'P',2}});
    cout<<mp['O'];
        //prints 1

//inserting keys into a map
    mp['u'] = 9; //this is one way
    cout<<mp['u']<<endl;
    //prints 9
    
    mp.insert(pair<char, int> ('j', 5)); //this is the more formal way of inserting values. (but the first way is easier)
    cout<<mp['j']<<endl;
    //prints 5

    //note that for the second option, we could have also declared a value 
            //value = pair<char, int> ('j', 5)
            //mp.insert(value);    
        //all values in a map are pairs 
    
//erasing:
    mp.erase('j');
    cout<<mp['j']<<endl;    
    //prints 0, cuz j does not exist

    mp.clear();
    //removes all elements in the map.

//checking size of map
    cout<<mp.size()<<endl;
    //prints 0

    cout<<mp.empty()<<endl;
    //returns 1 (true) if empty
        //    0 (false) if not empty
    //prints 1 in this case, as it is empty (we used the clear() method!)

    mp['J'] = 0;
    mp['U'] = 1;
//HOW to loop through a map -- it's more complicated, cuz it's unordered.
    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        //basically, begin() is just a value representing the first element in a map, and then, we can increase the value of the iterator (basically a int, but with different type)
            //here, the real type of itr is map<char, int>::iterator
            //an iterator is basically a pointer * --> so it actually gives the memory address of the value

        //itr represents the value of the index 
            // to access the first element of the pair at the itr position, we use while dereferencing (getting the value of the * object)
        cout<<"this is the key "<<(*itr).first;
            //same thing as  itr-> first
                //this print the key value
        cout<<" this is the value "<<(*itr).second<<endl; //or itr -> second
            //prints 
                //this is the key J this is the value 0
                //this is the key U this is the value 1

        //*Note
        //before, when we accessed a pointed object -- so the object that the memory adress pointed to, we used 
            //(*memory_address).some_property_or_node_we_are_trying_to_access
        //another way of doing it is
            //memory_address -> some_property_or_node_we_are_trying_to_access
        
        //thus, *value = <a memory adress (uses &value)> -->we are getting the value of the memory adress (if the variable was a memory adress)
        //      memory_adress = *<a value> --> we are getting a memory adress from a value
    }
    //!another faster way to iterate!
        //here, through auto& itr, means that we are assigning an ALIAS for the value at mp
            //basically, itr now has the value at mp[index].
            //THIS IS NOT THE SAME as 
                //itr = &value -- > this gives a memory adress
                //&itr = value --> this means that if value changes, itr will also change!
    //thus, for the first loop, if I change the value inside the loop, it would change the value inside the map
    for(auto& itr:mp){
        cout<<itr.first;
        cout<<itr.second<<"\n";
        //do stuff, which changes the initial value!
        itr.second = 50505;
    }
    cout<<mp['J']<<endl;


    //while here, i am working with a copy, thus if I modify the value in the loop, I don't modify the value that is in the map
    for(auto itr:mp){
        cout<<itr.first;
        cout<<itr.second<<"\n";

        itr.second = 9090;
    }
    //Here, the value did not change!
    cout<<mp['J']<<endl;


//other random functions:
    //first_map.swap(second_map); //*swaps the content of the two maps
    mp.insert({'a', 5024});
    if(mp.count('a')>0){
        cout<<"it exists!\n";
    }

    //the find method returns an ITERATOR!!! that actually refers to the position of the value we are looking for
    auto x = mp.find('a')->second; //returns the second element of the map
    //if it doesn't exist, it'll return a random thingy!
    cout<<(mp.find('a'))->second<<"-----\n";
    //to get the value of the iterator itself, you can just *itr
    

    //seeing if a key exists in a map
    if(mp.count('J')>0){
        cout<<"it exists!\n";
    }
    cout<<mp.at('J')<<"\n";

//cout 0 when does not exist
    cout<<(mp['q']==0)<<"\n";
    //yea... idk what happens when I call at on an unknown key
    //cout<<(mp.at('q')==mp.end())<<"\n";


    cout<<"(--------------------------------------)"<<"\n";
    //COUT<<




    //! alright, here are a few METHODS  in c++
    //~https://www.programiz.com/cpp-programming/unordered-map
    /*
    insert()	insert one or more key-value pairs
    count()	returns 1 if key exists and 0 if not
    find()	returns the iterator to the element with the specified key
    at()	returns the element at the specified key
    size()	returns the number of elements
    empty()	returns true if the unordered map is empty
    erase()	removes elements with specified key
    clear()	removes all elements
    */
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
//*Note
        //before, when we accessed a pointed object -- so the object that the memory adress pointed to, we used 
            //(*memory_address).some_property_or_node_we_are_trying_to_access
        //another way of doing it is
            //memory_address -> some_property_or_node_we_are_trying_to_access
        
        //thus, *value = <a memory adress (uses &value)> -->we are getting the value of the memory adress (if the variable was a memory adress)
        //      memory_adress = *<a value> --> we are getting a memory adress from a value
    
    //!another faster way to iterate!
        //here, through auto& itr, means that we are assigning an ALIAS for the value at mp
            //basically, itr now has the value at mp[index].
            //THIS IS NOT THE SAME as 
                //itr = &value -- > this gives a memory adress
                //&itr = value --> this means that if value changes, itr will also change!

int main(){
    cout<<"hello \n";
    int a = 0;
    int b = &a;//int *b=&a also seems to work and do the same...
    cout<<b<<endl; //returns a memory adress

    cout<<*b<<endl;//returns the value of the memory adress (0)

    int& c = a; //we are declaring c as a reference to a!!
    cout<<c<<endl; //returns 0

    a = 5;
    cout<<c<<endl;//here c changes, even though I only changed a!

    auto* value = &a;
    cout<<value<<endl;//returns memory adress
    cout<<*value<<endl;//returns 0;


    return 0;
}
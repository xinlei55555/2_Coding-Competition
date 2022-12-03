#include <iostream>
#include <vector>

#include<bits/stdc++.h>
//this is if we want to use remove() for our arrays
using namespace std;


int main(){
    vector<int> a = {1, 2, 3, 4, 5};
// for an array, we absolutely need the size and the number of elements.
// data_type name [size_of_array] = {elements, in, the, array};

    for(int i = 0; i<a.size(); i++){

        cout<<a[i];
        //>>>12345
}
    cout<<endl;
//INSERTING ELEMENTS IN A VECTOR!
    //-------------------------------  
    // Inserting at start
        a.insert(a.begin(), 9);
    //THE INSERT METHOD:
        // vector_name.insert(index, element);
    //.begin() simply give the index of the first element (0) in a specific vector
    //.end() simply gives the index of the last element in a specific vector
        //ex:
    //typeid(name_of_the_variable).name() gives the type of a variable.
        cout<<typeid(a.begin()).name()<<endl;
    //>>>N9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE
        //thus, the value of .begin is not an int.


        for(int i = 0; i<a.size(); i++){
    //.size() is to get the size of the vector

            cout<<a[i];
            //>>>912345
    }
        cout<<endl;
    //-----------------------------------------------
    // Inserting after a specific element element
        a.insert(a.begin()+(3-1), 9);

        for(int i = 0; i<a.size(); i++){

            cout<<a[i];
            //>>>9192345
    }
        cout<<endl;
    //--------------------------------
    // Inserting at last
        a.push_back(9);

        for(int i = 0; i<a.size(); i++){

            cout<<a[i];
            //>>>91923459
}
    cout<<endl;
//-----------------------------------------------------------------------
//REMOVING ELEMENTS IN A VECTOR
    //https://iq.opengenus.org/ways-to-remove-elements-from-vector-cpp/
//for the first few functions, do not forget to #include <bits/stdc++.h>

    //remove(index_from_which_we_start_looking, index_to_which_we_stop_looking, value_of_the_element_to_remove)
    remove(a.begin(), a.end(),9);
    //the remove function is just like the range() function in python, in that it excludes the last value

    for(int i = 0; i<a.size(); i++){

            cout<<a[i];
            //>>>12345459
}
    cout<<endl;
    //---------------------------------------
    //removing at a specific index
    //vector_name.erase(position (indicate using vector_name.begin()+index_value));
    //OR vector_name.erase(vector_name.begin()+index_of_the_first_value, vector_name.being()+index_of_the_second_value);
        //this erases all elements between these two values
    a.erase(a.begin()+1, a.begin()+3);
        //*ca exclue l'index superieur
     for(int i = 0; i<a.size(); i++){

            cout<<a[i];
            //>>>145459
}
    cout<<endl;
    
    //---------------------------------------
    //.clear() removes all elements in a vector
    a.clear();
    for(int i = 0; i<a.size(); i++){

            cout<<a[i];
            //>>>
}
    cout<<endl;


return 0;
}

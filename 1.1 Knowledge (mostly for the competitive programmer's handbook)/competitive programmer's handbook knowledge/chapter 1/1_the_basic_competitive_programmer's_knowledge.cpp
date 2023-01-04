//!random websites with tricks for competitive programming
    //~https://www.geeksforgeeks.org/c-tricks-competitive-programming-c-11/
//includes all the libraries possible in c++!
#include <bits/stdc++.h>

//defining some shortcuts for specific strings:
    #define F first
    #define S second
    #define PB push_back
    #define MP make_pair
//see later for what happens!

using namespace std;

int main(){
    int x=5;
    x-=4;
// !debugging efficiently
//  THuS!! when I use it on something like codeforce, it won't register it!
    cerr<<"x is "<<x<<"\n";
    //will cout all the variables
//!ternary operators:
// The conditional operator evaluates an expression, returning one value if that expression evaluates to true, and a different one if the expression evaluates as false. Its syntax is:

// condition ? result1 : result2

//these two lines somehow make the inputting and outputting faster?
    //the 0 stands for false, which means that the program doesn't sync everything after each input or output.
    //we call this "syncing" flushing...
        //that means that if I write a cout<<"before the cin";, it does not display the cout before!!
        //-->this makes the following cins and couts faster!
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    string x;

//this line doesn't appear automatically!
    //also, better to use \n than <<endl;, cuz endl causes a flushing (a refresh of the cmd)
    cout<<"please enter your name \n";

//inputing:
    cin >> a >> b >> x;

//getting a whole line (even the spaces) as 1 string!
    string s;
    cout<<"using the getline function, write a sentence!\n";
    //weirdly, it doesn't work if I use cin WITH getline
        //If getline is used after cin >>, the getline() sees this newline character as leading whitespace, and it just stops reading any further.
            //I thus created a dummy getline();
    getline(cin, s);
    getline(cin, s);
    cout<<s;

//inputting unknown amount of data:
    //this continues until the value of x is invalid (ex: we input a string instead...)
    while(cin>>x){
        cout<<x;
        if(x == "stop"){
            break;
        }
    }

//another cool way of looping
    //this does the action n times
    int n;
    for(cin>>n; n--;){
        cout<<"HI";
    }
//fun stuff about n++ is that it prints the value of n, before ADDING
    int n=0;
    while(n<10){
        cout<<n++;
        cout<<n<<"\n";
    }
 

//this will run ok() n times
    n=5;
    //I could then create a void ok() outside the int main(), and let it run!

    //    for(cin>>n;n!=0;ok());


//inputting and outputting using files:
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

//these are two long datatype values
    //double is a larget float, and long double is the biggest possible
        //floats have 7 digits after the decimal, double have 16
    __int64 hi = 312312312312312321;
    long long number = 123456789123456678;
    cout<<number<<'\n';


    // another way is to use the char "L" at the end of a number to say that it is a long value, and "LL" for a long long
    // ex:   Here, i am summing all the values in a vector ar, formed of long integers, the initial sum must thus be 0L (or long 0) 
    //--> long value = accumulate(ar.begin(), ar.end(),0L);

//shortening datatype names:
    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;
    //thus, I only need to write ll to declare a long datatype!
    ll hellol = 8920374327489237498237438;

    pi v;
// // using the define, i can now call stuff easier!
//     v.push_back(make_pair(y1,x1));
//     v.push_back(make_pair(y2,x2));
//     int d = v[i].first+v[i].second;
// // becomes
//     v.PB(MP(y1,x1));
//     v.PB(MP(y2,x2));
//     int d = v[i].F+v[i].S;

//setting the precision of a cout
    //althought the value that is being printed needs to be minimally a float  (5.)
    cout<<"this is your variable with a preicison of seven decimals "<<fixed<<setprecision(7)<<5.;


//!although another cool way of cin and cout, that can be faster (although using ios_base:sync_with_stdio(false) makes the same)
    //*you have to first learn these
    /*Some C++ data types, their format specifiers, and their most common bit widths are as follows:
        Int ("%d"): 32 Bit integer
        Long ("%ld"): 64 bit integer
        Char ("%c"): Character type
        Float ("%f"): 32 bit real value
        Double ("%lf"): 64 bit real value
    */
   //scanf("data_type code", &the_value_that_is_getting_cin)
    //For example, to read a character followed by a double:
    char ch;
    double d;
    scanf("%c %lf", &ch, &d);
    printf("%c %lf", ch, d);

    //*cool thing with loops:
    int h[10]={0,1,2,3,4,5,6,7,8,9};
        //this would print all element, from 0 to 10
            //~important!, you have to put cout<<h[j] BEFORE j++, since you want it to output the previuos index
    for(int j=0;j<10;cout<<h[j]<<" ", j++);
    

    return 0;
}
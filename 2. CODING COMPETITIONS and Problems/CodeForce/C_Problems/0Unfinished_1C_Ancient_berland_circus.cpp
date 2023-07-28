//dAMMMN this guy has a crazy formula:
    // A2A

    // You can find the circumcentre of the polygon which will be the intersection of the perpendicular bisectors of the line segments.

    // Using this we can find the circumradius,R .

    // Now, R = s/(2*sin(pi/n)) for a regular polygon, where s is side length and n is no. of sides. Since it is given that n<= 100, Iterate over 1 to 100 to find the smallest value of n that gives a near-integer value of s. This is your polygon.

    // Now find the area using Area= 0.5*n*R*R*sin(2*pi/n).

        //so I basically start by finding the corresponding circle
                //Then, I can find the point that is Between the two others points
            //and then, i go from 3 to 100 (which is the maaximum of sides) until I find one that corresponds.
                //then, based on the central point, the angle, and the two vertices I have found, I can start building a shape around it, and see if it connects
                //OR
                //mathematically, I know that the sum of all the interior angles of a regular polygon is ((no. of sides) - 2) *180
                    //thus ((no. of sides)-2)*180 = (the angle found btw the two vertices) * n (which  is also the number of angles)
#include <bits/stdc++.h>

using namespace std;

int main(){
//the polygon could be any that has the same angles (a triangle, a rectangle, anything!!!)
    float x,y;
    vector<float> val;
    for(int i=0; i<3; i++){
        cin>>x>>y;
        val.push_back(x);
        val.push_back(y);
    }
//calculate the value of each digonal
    float first, second, third;
    first=sqrt(pow((val[3]-val[1]),2)+pow((val[2]-val[0]),2));
    second=sqrt(pow((val[5]-val[1]),2)+pow((val[4]-val[0]),2));
    third=sqrt(pow(val[5]-val[3],2)+pow((val[4]-val[2]),2));


    cout<<first<<" "<<second<<" "<<third<<"\n";
    float real_max;
    real_max = max(max(first, second), third);
    if(real_max==first) cout<<fixed<<setprecision(7)<<(second*third);
    if(real_max==second) cout<<fixed<<setprecision(7)<<(first*third);
    if(real_max==third) cout<<fixed<<setprecision(7)<<(second*first);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

float findArea(float r)
{
    float area=2*acos(0.0)*r*r;
    //2acos(0.0) is used for exact value of pi. we can use 3.14 here easily.
    return area;
}

int main()
{
    float radius;
    cin>>radius;

    float area=findArea(radius);
    cout<<area<<endl;
    return 0;
}

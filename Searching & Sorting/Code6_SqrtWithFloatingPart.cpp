#include<iostream>
using namespace std;

int mySqrt(int x) {
    //binary search O(log n)
    int s=0;
    int e=x;
    long long mid=s+(e-s)/2; //to prevent overflow in mid*mid
    int ans=0;
    while(s<=e)
    {
        if((mid*mid)>x)
        {
            e=mid-1;
        }
        else if((mid*mid)<x)
        {
            ans=mid;
            s=mid+1;
        }
        //if mid*mid==x, exact square root exists
        else
        {
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;

    int ans=mySqrt(n);
    cout<<"The sqrt without decimal is: "<<ans<<endl;

    int precision;
    cout<<"Enter the precision in for sqrt in float data type: "<<endl;
    cin>>precision;

    float step=0.1;
    float sqrtVal=ans; //int to float

    //for number of decimal points
    for(int i=0;i<precision;i++)
    {
        //for answer
        for(float j=sqrtVal;(j*j)<=n;j+=step)
        {
            sqrtVal=j;
        }
        step=step/10;
    }
    cout<<"The precise square root is: "<<sqrtVal<<endl;
    return 0;
}

#include<iostream>
#include<climits>
using namespace std;

int divisionUsingBinary(int dividend,int divisor)
{
    //taking care of negative while checking for answer by taking absolute value.
    if(dividend<0)
    {
        dividend*=-1;
    }
    if(divisor<0)
    {
        divisor*=-1;
    }
    //checking 0 case.
    if(dividend==0 && divisor==0)
    {
        return INT_MIN;
    }

    if(divisor==0)
    {
        return INT_MAX;
    }

    int s=0;
    int e=dividend;
    int mid=s+(e-s)/2;
    int quotient=0;
    while(s<=e)
    {
        //solution with remainder exists.
        if((mid*divisor)<dividend)
        {
            //save quotient
            quotient=mid;
            //search in right search space if greater solution exists or not.
            s=mid+1;
        }
        //search in left as solution does not exist in left search space.
        else if((mid*divisor)>dividend)
        {
            e=mid-1;
        }
        //exact quotient exists. return directly.
        else if((mid*divisor)==dividend)
        {
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return quotient;
}

double getPrecision(int ans, int dividend, int divisor, int precision)
{
    if(ans==INT_MIN)
    {
        return INT_MIN;
    }
    if(ans==INT_MAX)
    {
        return INT_MAX;
    }

    double finalAns=abs(ans);
    double finalDivisor=abs(divisor);
    double finalDividend=abs(dividend);
    double step=0.1;
    for(int i=0;i<precision;i++)
    {
        for(double j=finalAns;(j*finalDivisor)<=finalDividend;j+=step)
        {
            finalAns=j;
        }
        step/=10;
    }
    return finalAns;
}

int main()
{
    int x,y;
    cout<<"Enter numbers to divide: "<<endl;
    cin>>x>>y;

    int ans=divisionUsingBinary(x,y);

    //checking if divisor or dividend was less than 0. both less than 0 will evaluate to +ve answer only.
    if((x<0 && y>0) || (x>0 && y<0))
    {
        ans=ans*-1;
    }
    cout<<"The resultant is: "<<ans<<endl;


    int precision;
    cout<<"Enter the decimal places you want in the answer(5 max): "<<endl;
    cin>>precision;

    double finalAns=getPrecision(ans,x,y,precision);

    if((x<0 && y>0) || (x>0 && y<0))
    {
        finalAns=finalAns*-1;
    }
    cout<<"The resultant in decimal with given precision is: "<<finalAns<<endl;
    return 0;
}

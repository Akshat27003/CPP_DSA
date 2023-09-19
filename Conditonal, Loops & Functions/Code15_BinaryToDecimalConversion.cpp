#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n)
{
    int answer=0;
    int i=0;
    while(n!=0)
    {
        int digit=n%10;
        int placeValue=digit*pow(2,i);
        answer+=placeValue;
        i++;
        n=n/10;
    }
    return answer;
}

int binaryToDecimalMethod2(int n)
{
    int answer=0;
    int i=0;
    while(n!=0)
    {
        int digit=n%10;
        answer+=digit<<i; //performs the operation of power of 2.
        i++;
        n=n/10;
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;
    int result=binaryToDecimal(n);
    cout<<"The decimal equivalent of binary number "<<n<<" is: "<<result<<endl;
    cout<<"The decimal equivalent of binary number "<<n<<" is: "<<binaryToDecimalMethod2(n)<<endl;
    return 0;
}

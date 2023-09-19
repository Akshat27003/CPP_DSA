#include<iostream>
#include<cmath>
using namespace std;

//using division method
int decimalToBinary(int n)
{
    int answer=0;
    int i=0;
    while(n!=0)
    {
        int rem=n%2;
        answer=rem*pow(10,i)+answer;
        n=n/2;
        i++;
    }
    return answer;
}

int decimalToBinaryMethod2(int n)
{
    int answer=0;
    int i=0;
    while(n>0)
    {
        int extractedBit=n&1;
        answer=extractedBit*pow(10,i)+answer;
        n=n>>1;
        i++;
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;
    int result=decimalToBinary(n);
    cout<<"Binary equivalent of "<<n<<" using division method is: "<<result<<endl;
    int result2=decimalToBinaryMethod2(n);
    cout<<"Binary equivalent of "<<n<<" using bitwise operators method is: "<<result2<<endl;
    return 0;
}

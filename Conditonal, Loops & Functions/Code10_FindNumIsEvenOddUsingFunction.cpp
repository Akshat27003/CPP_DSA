#include<iostream>
using namespace std;

void checkEvenOdd(int n)
{
    if(n%2==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    checkEvenOdd(n);
    return 0;
}

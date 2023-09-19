#include<iostream>
using namespace std;

//factorial of upto 12 can be stored in int data type.. and upto 20 or 21 factorial is possible with long long data.

int factorial(int n)
{
    int prod=1;
    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }
    return prod;
}

int main()
{
    int n;
    cout<<"Enter value from 1 to 12: ";
    cin>>n;
    int result=factorial(n);
    cout<<result<<endl;

    return 0;
}

#include<iostream>
using namespace std;

void printCounting(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int N;
    cin>>N;

    printCounting(N);

    return 0;
}

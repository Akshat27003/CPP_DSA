#include<iostream>
using namespace std;

int main()
{
    /*
    square pattern:
    n=4:
    * * * *
    * * * *
    * * * *
    * * * *
    */
    int n;
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

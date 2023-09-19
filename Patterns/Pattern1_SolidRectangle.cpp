#include<iostream>
using namespace std;

int main()
{
    /*
    solid rectange pattern:
    * * * * *
    * * * * *
    * * * * *
    */
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<m;j+=1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        12345
        1234
        123
        12
        1
    */
    int n;
    cin>>n;
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<n-rows;cols+=1)
        {
            cout<<(cols+1);
        }
        cout<<endl;
    }
    return 0;
}

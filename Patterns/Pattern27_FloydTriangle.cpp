#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
    */
    int n;
    cin>>n;

    int val=1;
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<(rows+1);cols+=1)
        {
            cout<<val<<" ";
            val+=1;
        }
        cout<<endl;
    }
    return 0;
}

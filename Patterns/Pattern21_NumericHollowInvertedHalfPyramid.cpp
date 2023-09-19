#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        12345
        2  5
        3 5
        45
        5
    */
    int n;
    cin>>n;

    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<(n-rows);cols+=1)
        {
            if(cols==0)
            {
                cout<<(rows+1);
            }
            else if(rows==0)
            {
                cout<<(cols+1);
            }
            else if((cols+rows)==(n-1))
            {
                cout<<n;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

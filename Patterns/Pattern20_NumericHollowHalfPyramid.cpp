#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        1
        12
        1 3
        1  4
        12345
    */
    int n;
    cin>>n;

    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<(rows+1);cols+=1)
        {
            if(cols==0)
            {
                cout<<(cols+1)<<" ";
            }
            else if(rows==(n-1) || cols==rows)
            {
                cout<<(cols+1)<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}

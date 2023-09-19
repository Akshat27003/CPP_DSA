#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        * * * * *
        *     *
        *   *
        * *
        *
    */
    int n;
    cin>>n;
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<n-rows;cols+=1)
        {
            if(rows==0 || cols==0 || cols==(n-rows-1))
            {
                cout<<"* ";
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

using namespace std;
#include<iostream>

int main()
{
    /*
    for n=5, print:
            1
           121
          12321
         1234321
        123454321
    */

    int n;
    cin>>n;
    for(int rows=0;rows<n;rows+=1)
    {
        //spaces
        for(int spaces=0;spaces<(n-rows-1);spaces+=1)
        {
            cout<<" ";
        }
        int cols;
        //increasing pattern
        for(cols=0;cols<(rows+1);cols+=1)
        {
            cout<<(cols+1);
        }

        cols=cols-1; //to initialize again for decreasing pattern.
        for(;cols>=1;cols-=1)
        {
            cout<<(cols);
        }
        cout<<endl;
    }
    return 0;
}

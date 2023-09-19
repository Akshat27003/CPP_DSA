#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        A
        ABA
        ABCBA
        ABCDCBA
        ABCDEDCBA
    */
    int n;
    cin>>n;

    for(int rows=0;rows<n;rows+=1)
    {
        char ch='A';// A is somewhat equivalent to 1.
        for(int incNum=0;incNum<rows+1;incNum+=1)
        {
            cout<<(ch);
            ch+=1;
        }

        ch=ch-2;
        for(int decNum=rows;decNum>=1;decNum-=1)
        {
            cout<<ch;
            ch-=1;
        }
        cout<<endl;
    }


    cout<<endl;

    for(int rows=0;rows<n;rows+=1)
    {
        int cols;
        for(cols=0;cols<rows+1;cols+=1)
        {
            cout<<(cols+1);
        }

        cols=cols-1;
        for(;cols>=1;cols-=1)
        {
            cout<<cols;
        }
        cout<<endl;
    }

    return 0;
}

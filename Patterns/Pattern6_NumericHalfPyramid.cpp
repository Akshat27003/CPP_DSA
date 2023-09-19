#include<iostream>
using namespace std;

int main()
{
    /*
    for n=6, print:
        1
        12
        123
        1234
        12345
        123456
    */
    int n;
    cin>>n;
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<=rows;cols+=1)
        {
            cout<<cols+1;
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // if the digits entered are: 1,2,3,1,5 in that order.. the number should be 51321
    int n;
    cin>>n;
    int finalNum=0;
    int i=0;
    while(n>0)
    {
        int digit;
        cin>>digit;
        finalNum=digit*pow(10,i)+finalNum;
        i++;
        n--;
    }
    cout<<finalNum<<endl;
    return 0;
}

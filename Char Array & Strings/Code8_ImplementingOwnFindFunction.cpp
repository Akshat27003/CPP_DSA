#include<iostream>
#include<string>
using namespace std;

int findIndex(string base,string target)
{
    for(int i=0;i<(base.length()-target.length());i++)
    {
        if(base.substr(i,target.length())==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string base="My first target message!";
    string target="target";

    int index=findIndex(base,target);

    cout<<index<<endl;

    return 0;
}

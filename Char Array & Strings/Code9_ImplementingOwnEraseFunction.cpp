#include<iostream>
#include<string>
using namespace std;

string eraseFunc(string str, string target, int pos)
{
    return str.substr(0,pos)+str.substr(pos+target.length(),str.length());
}

int main()
{
    string str;
    cin>>str;

    string target;
    cin>>target;

    int pos=str.find(target);

    while(pos != string::npos )
    {
        str=eraseFunc(str,target,pos);
        pos=str.find(target);
    }

    cout<<str;
    return 0;
}

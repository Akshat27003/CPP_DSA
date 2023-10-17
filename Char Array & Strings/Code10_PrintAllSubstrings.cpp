#include<iostream>
#include<string>
using namespace std;

void printAllSubstrings(string str)
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=i;j<str.length();j++)
        {
            cout<<(str.substr(i,j-i+1))<<endl;
        }
    }
}

int main()
{
    string str;
    cin>>str;

    printAllSubstrings(str);

    return 0;
}

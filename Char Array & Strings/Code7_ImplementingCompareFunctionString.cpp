#include<iostream>
#include<string>
using namespace std;

bool stringCompare(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }
    else
    {
        int i=0;
        int j=0;
        while(i<str1.length())
        {
            if(str1[i]!=str2[j])
            {
                return false;
            }
            i++;
            j++;
        }
    }
    return true;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;

    if(stringCompare(str1,str2))
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings unequal"<<endl;
    }



    return 0;
}

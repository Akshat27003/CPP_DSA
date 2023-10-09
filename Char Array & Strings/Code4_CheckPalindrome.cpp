#include<iostream>
using namespace std;

int getLength(char arr[])
{
    int length=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        length++;
    }
    return length;
}

bool checkPalindrome(char arr[])
{
    int start=0;
    int endIndex=getLength(arr)-1;

    while(start<endIndex)
    {
        if(arr[start]!=arr[endIndex])
        {
            return false;
        }
        start++;
        endIndex--;
    }
    return true;
}

int main()
{
    char arr[100];
    cin>>arr;

    if(checkPalindrome(arr))
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}

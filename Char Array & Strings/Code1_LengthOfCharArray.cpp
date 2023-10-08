#include<iostream>
#include<cstring>
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

int main()
{
    char arr[100];
    cin>>arr;

    int ans=getLength(arr);

    cout<<"The length of the given char array is: "<<ans<<endl;

    //using strlen() function:
    cout<<"The length of the given char array using strlen() function is: "<<strlen(arr)<<endl;

    return 0;
}

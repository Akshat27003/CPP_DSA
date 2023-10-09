#include<iostream>
using namespace std;

void convertIntoLowerCase(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        arr[i]=arr[i]+32;
    }
}

int main()
{
    char arr[100];
    cin>>arr;

    cout<<"Original Char Array: "<<arr<<endl;

    convertIntoLowerCase(arr);

    cout<<"Converted Char Array: "<<arr<<endl;
    return 0;
}

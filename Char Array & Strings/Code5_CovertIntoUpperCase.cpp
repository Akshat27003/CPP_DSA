#include<iostream>
using namespace std;

void convertIntoUpperCase(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        arr[i]=arr[i]-'a'+'A';
    }
}

int main()
{
    char arr[100];
    cin>>arr;

    cout<<"Original Char Array: "<<arr<<endl;

    convertIntoUpperCase(arr);

    cout<<"Converted Char Array: "<<arr<<endl;
    return 0;
}

#include<iostream>
using namespace std;

void replaceAllSpaces(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            arr[i]='@';
        }
    }
}

int main()
{
    char arr[100];
    cin.getline(arr,40);

    cout<<"Char Array with spaces: "<<arr<<endl;

    replaceAllSpaces(arr);

    cout<<"Char Array with @: "<<arr<<endl;
    return 0;
}

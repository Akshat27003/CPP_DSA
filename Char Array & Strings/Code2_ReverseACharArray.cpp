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

void reverseCharArr(char arr[])
{
    int start=0;
    int endIndex=getLength(arr)-1;

    while(start<endIndex)
    {
        swap(arr[start],arr[endIndex]);
        start++;
        endIndex--;
    }
}

int main()
{
    char arr[100];
    cin>>arr;

    cout<<"Char Array before reversal: "<<arr<<endl;

    reverseCharArr(arr);

    cout<<"Char Array after reversal: "<<arr<<endl;
    return 0;
}

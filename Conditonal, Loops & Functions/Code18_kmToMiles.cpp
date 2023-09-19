#include<iostream>
using namespace std;

float kmToMiles(float n)
{
    float miles=n*0.62;
    return miles;
}

int main()
{
    float km;
    cin>>km;
    float answerInMiles=kmToMiles(km);
    cout<<"The equivalent of "<<km<<"kms into miles is: "<<answerInMiles<<" miles"<<endl;
    return 0;
}

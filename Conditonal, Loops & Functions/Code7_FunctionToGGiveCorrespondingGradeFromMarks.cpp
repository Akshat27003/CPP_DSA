#include<iostream>
using namespace std;

char marksToGrade(int marks)
{
    if(marks>=90)
    {
        return 'A';
    }
    if(marks>=80)
    {
        return 'B';
    }
    if(marks>=70)
    {
        return 'C';
    }
    if(marks>=60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int marks;
    cin>>marks;
    char grade=marksToGrade(marks);
    cout<<"The student grade corresponding to their marks is: "<<grade<<endl;
    return 0;
}

#include<iostream>
using namespace std;

//declaring enum globally
enum Day
{
    Monday, //mapped to 0
    Tuesday, //1
    Wednesday, //2
    Thursday, //3
    Friday, //4
    Saturday, //5
    Sunday //6
};

int main()
{
    int userInput; //taking input for day from user.
    cin>>userInput;
    Day selectedDay; //variable of type enum Day.

    selectedDay=static_cast<Day>(userInput); //explicit typecasting using static_cast. only if value is between 0 and 6 (both included).

    switch(selectedDay)
    {
        case Monday:
            cout<<"Monday"<<endl;
            break;
        case Tuesday:
            cout<<"Tuesday"<<endl;
            break;
        case Wednesday:
            cout<<"Wednesday"<<endl;
            break;
        case Thursday:
            cout<<"Thursday"<<endl;
            break;
        case Friday:
            cout<<"Friday"<<endl;
            break;
        case Saturday:
            cout<<"Saturday"<<endl;
            break;
        case Sunday:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid Day!"<<endl;
        }
    //}
   /* else
    {
        cout<<"Invalid Day! "<<endl;
    }*/
    return 0;
}

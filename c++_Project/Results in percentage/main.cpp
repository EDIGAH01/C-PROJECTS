#include <iostream>

using namespace std;

int main()
{
    // converting marks to percentage
    int marks;
    float percent;
    cout<<"Please enter your marks out of 300: "<<endl;
    cin>>marks;
    percent = (marks/300) * 100;
    cout<<"your percentage is: "<<percent<<"%"<<endl;
    if (marks > 300)
    {
        cout<<"You entered a wrong value."<<endl;
    }
    else if(percent > 60 )
    {
        cout<<"Your division is first."<<endl;
    }
    else if(percent > 50 && percent < 53)
    {
        cout<<"Your division is the second."<<endl;
    }
    else if(percent > 33 && percent < 50 )
    {
        cout<<"Your division is the third."<<endl;
    }
    else
    {
        cout<<"fail."<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

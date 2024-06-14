#include <iostream>

using namespace std;

int main()
{
    //A grading system with if statement
    int marks;
    cout<<"Please enter your marks."<<endl;
    cin>>marks;
    if (marks>=0 && marks <= 39)
    {
        cout<<"you are not there yet, keep going."<<endl;
    }
    else if (marks >= 40 && marks<59)
    {
        cout<<"you got a refer, try again don't give up."<<endl;
    }
    else if(marks >= 60 && marks <= 79)
    {
        cout<<"you got a pass, good job keep pushing."<<endl;
    }
    else if (marks >= 80)
    {
        cout<<"You got a distinction, congrats, keep it up."<<endl;
    }
    else
    {
        cout<<"You entered an invalid value."<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

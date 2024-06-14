#include <iostream>

using namespace std;

int main()
{
    //Vhecking for the greatest of four numbers
    int a,b,c,d;
    cout<<"Please enter the first number: "<<endl;
    cin>>a;
    cout<<"Please enter the second number: "<<endl;
    cin>>b;
    cout<<"Please enter the thirdnumber: "<<endl;
    cin>>c;
    cout<<"Please enter the fourth number: " <<endl;
    cin>>d;
    if (a>b && a>c && a>d)
    {
        cout<<"Te greatest of the four numbers is: "<<a<<endl;
    }
    else if (b>c && b>d)
    {
        cout<<"The greatest of the numbers is: " <<b<<endl;
    }
    else if (c>d)
    {
        cout<<"The greatest of the four numbers is: "<<c<<endl;
    }
    else
    {
        cout<<"The greatest of the four numbers is: "<<d<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Please enter your age: ";
    cin>>age;
    if (age>0 && age<12)
    {
        cout<<"A kid."<<endl;
    }
    else if (age>=12 && age <19)
    {
        cout<<"A teenager."<<endl;
    }
    else if(age >= 19 && age <30)
    {
        cout<<"You are young."<<endl;
    }
    else if (age >= 30 && age < 45)
    {
        cout<<"Mature."<<endl;
    }
    else if (age >= 45 && age < 60)
    {
        cout<<" Experienced."<<endl;
    }
    else if (age >= 60 && age < 75)
    {
        cout<<"old."<<endl;
    }
    else if (age > 75)
    {
        cout<<"Senior citizen."<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

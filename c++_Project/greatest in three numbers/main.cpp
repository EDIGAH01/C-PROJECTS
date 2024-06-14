#include <iostream>

using namespace std;

int main()
{
    //checking the greatest of three umbers
    cout<<"Please enter three numbers:a,b and c."<<endl;
    int a,b,c;
    cout<<"Please enter the first number: "<<endl;
    cin>>a;
    cout<<"Please enter the second number: "<<endl;
    cin>>b;
    cout<<"Please enter the third number: "<<endl;
    cin>>c;
    if (a>b && a>c)
    {
        cout<<"The greatest number of the three is: "<<a<<endl;
    }
    else if(b>c)
    {
        cout<<"The greatest number of the three is: "<<b<<endl;
    }
    else{
        cout<<"The greatest number of the three is: "<<c<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //Checking wheather the number is a palindrome or not.
    int a, b, c, d;
    cout<<"Please enter the number: ";
    cin>>a;
    b = a;
    c = 0;
    while (a>0)
    {
        d = a%10;
        c = c * 10+d;
        a = a / 10;
    }
    if(b == c)
    {
        cout<<"The number is a palindrome."<<endl;
    }
    else
    {
        cout<<"The number is not a palindrome."<<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //checking the factorial of a number given by the user.
    int num, factorial = 1;
    cout<<"Please enter the number: ";
    cin>>num;
    if (num<0)
    {
        cout<<"Sorry, Factorial does not exist."<<endl;
    }
    else if(num == 0)
    {
        cout<<"The factorial of 0 is 1."<<endl;
    }
    else
    {
        for (int i = 1; i<num+1;i++)
        {
            factorial *= i;
            cout<<"The factorial of "<< num<<" is: "<<factorial<<endl;
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}

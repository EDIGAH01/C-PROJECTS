#include <iostream>

using namespace std;

int main()
{
    //Fibonacci series using for loop.
    int a,next, first_value, second_value;
    cout<<"Please enter the range: ";
    cin>>a;
    first_value = 0;
    second_value = 1;
    for(int i = 0; i< a; i++)
    {
        if (i<=1)
        {
            next = i;
        }
        else
        {
            next = first_value + second_value;
            first_value = second_value;
            second_value = next;
        }
        cout<<next<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

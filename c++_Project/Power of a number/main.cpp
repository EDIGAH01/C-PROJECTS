#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    // calculating the power of a number.
    int a,b, square;
    cout<<"Please enter the number: ";
    cin>>a;
    cout<<"Please enter the power: ";
    cin>>b;
    square = pow(a,b);
    cout<<a<<" raised to power "<<b<<" is: "<<square<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

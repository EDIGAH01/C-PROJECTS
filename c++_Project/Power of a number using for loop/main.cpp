#include <iostream>

using namespace std;

int main()
{
    // calculating x power n using for loop.
    int a, b;
    cout<<"Please enter the number: ";
    cin>>a;
    cout<<"Pease enter the  power: ";
    cin>>b;
    int c = a;
    for(int x = 0; x<b-1; x++)
    {
        c *= a;
    }
    cout<<c<<"\n"<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

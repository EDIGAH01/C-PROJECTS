#include <iostream>

using namespace std;

int main()
{
    // sum of nth number.
    int sum, n;
    cout<<"Please enter the nth number: ";
    cin>>n;
    for (int c = 1; c <= n; c++)
    {
        sum += c;
        cout<<"The sum is: "<<sum<<endl;
    }
    cout<<"The total sum is: "<<sum<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

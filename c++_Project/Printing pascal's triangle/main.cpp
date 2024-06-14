#include <iostream>

using namespace std;

int main()
{
    // Printing pascals triangle.
    int n;
    cout<<"Please enter the number of rows: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for(int j = n-i; j > 0; j--)
        {
            cout<<" ";
        }
        for(int j = 0; j < i;j++ )
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

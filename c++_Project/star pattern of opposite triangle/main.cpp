#include <iostream>

using namespace std;

int main()
{
    // Star pattern of opposite triangle.
    int rows;
    cout<<"Please enter the number of rows here: ";
    cin>>rows;
    for(int i = 0; i<rows; i++)
    {
        for(int j = rows-i; j>0; j--)
        {
            cout<<" ";
        }
        for(int k = 0; k < i +1; k++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

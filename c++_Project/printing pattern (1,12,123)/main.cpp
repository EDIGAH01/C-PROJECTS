#include <iostream>

using namespace std;

int main()
{
    //printing a pattern 1, 12, 123.
    int rows;
    cout<<" Enter the number of rows here: ";
    cin>>rows;
    for(int i = 1; i<=rows; i++)
    {
        for(int j = 1; j<i+1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //printing an opposite side right angled triangle
    int rows;
    cout<<"Please enter the number rows: ";
    cin>>rows;
    for(int i = rows; i > 0; i--)
    {
        for(int j = 0; j< i; j++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

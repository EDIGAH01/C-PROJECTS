#include <iostream>

using namespace std;

int main()
{
    //printing 1.22.333,444.
    int rows;
    cout<<"Please enter the number of rows: ";
    cin>>rows;
    for(int i = 1; i<rows+1; i++)
    {
        for(int j = 1; j < i+1; j++)
        {
            cout<<i<<"";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int a = rows; a>=1; a--)
    {
        for(int b = 1; b<=a; b++)
        {
            cout<<a<<"";
        }
        cout<<endl;
    }
    cout<<"\n"<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

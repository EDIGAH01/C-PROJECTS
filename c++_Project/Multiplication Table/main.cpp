#include <iostream>

using namespace std;

int main()
{
    // A code for the multiplication table.
    int num;
    cout<<"Show the multiplication table of?: ";
    cin>>num;
    for (int i = 1; i <= 11; i++)
    {
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }
    cout<<"\n";
    cout << "Hello world!" << endl;
    return 0;
}

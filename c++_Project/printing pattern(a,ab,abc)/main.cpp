#include <iostream>

using namespace std;

int main()
{
    //printing the pattern a,ab,abc.
    char a;
    cout<<"Please enter a character: ";
    cin>> a;
    for (char x = 65; x< a+1; x++)
    {
        for (char c = 65; c < x+1; c++)
        {
            cout<<char(c);
        }
        cout<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

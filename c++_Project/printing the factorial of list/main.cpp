#include <iostream>

using namespace std;

int main()
{
    int a, i, k;
    cout<<"Please enter the number of values you wish to have in the list: ";
    cin>>a;
    int b[a];
    cout<<"Please enter the values."<<endl;
    for(i = 0; i < a; i++)
    {
        cin>>b[i];
    }
    cout<<endl;
    for(i = 1; i < a; i++)
    {
     k = b[i];
     int m = 1;
     for(int f = 0; f < k+1; f++)
     {
     m *= k;
     cout<< m<<" ";
    }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //Fibonacci series using while loop.
    int a;
    cout<<"Please enter the range: ";
    cin>>a;
    int i = 0;
    int first_value = 0;
    int second_value =1;
    int next_permutation;
    while(i<a)
    {
        if(i<=1)
        {
            next_permutation = i;
        }
        else
        {
            next_permutation = first_value + second_value;
            first_value = second_value;
            second_value = next_permutation;
        }
        cout<<next_permutation<<endl;
        i +=1;
    }
    cout << "Hello world!" << endl;
    return 0;
}

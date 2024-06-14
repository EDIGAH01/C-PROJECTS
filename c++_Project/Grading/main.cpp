#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout<<"Please enter your marks: ";
    cin>> marks;
    switch(marks){
case 0 ... 39:
    cout<<"you are not there yet, keep going."<<endl;
    break;
case 40 ... 59:
    cout<<"You got a refer, try again don't give up."<<endl;
    break;
case 60 ... 79:
    cout<<"You got a pass, congrats but keep pushing you can do it better."<<endl;
    break;
case 80 ... 100:
    cout<<"you got a distinction, congrats, keep it up."<<endl;
    break;
default:
    cout<<"You entered an invalid value."<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

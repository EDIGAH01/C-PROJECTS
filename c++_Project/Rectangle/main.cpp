#include <iostream>

using namespace std;

int main()
{
    int leng, width, area, perimeter;
    cout<< "please enter the length of the rectangle: "<<endl;
    cin>>leng;
    cout<< "please enter the width of the rectangle: "<<endl;
    cin>>width;
    area = leng * width;
    perimeter = 2*(leng + width);
    cout<< "The area of the rectangle is: "<<area<<endl;
    cout<<"The perimeter of the rectangle is: " << perimeter <<endl;
    cout << "Hello world!" << endl;
    return 0;
}

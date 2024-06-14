#include <iostream>

using namespace std;

int main()
{
    int area, perimeter, width;
    cout<< "Please enter the width of the square: "<<endl;
    cin>> width;
    area = width * width;
    perimeter = 4 *(width);
    cout<< "The area of the square is: "<<area <<endl;
    cout<< "The perimeter of the square is: "<< perimeter<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

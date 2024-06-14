#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Calculating the surface area, volume and perimeter of a cube."<<endl;
    int width;
    float volume, area, perimeter;
    cout<<"Please enter the width of your cube: ";
    cin>>width;
    area = 6 * (width*width);
    volume = (width*width) *width;
    perimeter = 6 * (width*4);
    cout<<"The area of the cube is: "<<area <<endl;
    cout<<"The volume of the cube is: "<<volume <<endl;
    cout<<"The perimeter of the cube is: "<< perimeter<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    cout<<"Calculating the surface area volume and perimeter of a cuboid."<<endl;
    int width, length;
    float volume, area, perimeter;
    cout<< "Please enter the width of your cuboid: ";
    cin>> width;
    cout<< "Please enter the length of your cuboid: ";
    cin>> length;
    area = (2*(width*width)) * (4*(length*width));
    volume = (width * width) * length;
    perimeter = ((width * 4)*2) + (4*(2*(length + width)));
    cout<<"The surface area of the cuboid is: "<<area<<endl;
    cout<<"The volume of the cuboid is: "<<volume<<endl;
    cout<<"The perimeter of the cuboid is: "<<perimeter<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

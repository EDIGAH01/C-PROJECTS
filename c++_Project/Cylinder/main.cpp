#include <iostream>

using namespace std;

int main()
{
    cout<<"Please enter the volume and the surface area of a cylinder."<<endl;
    int radius, height;
    float pi, volume, area;
    pi = 3.142;
    cout<<"Please enter the radius of you cylinder: ";
    cin>>radius;
    cout<<"Please enter the height of the cylinder: ";
    cin>>height;
    area = ((pi * (radius * radius))* 2) * ((pi*(radius+radius))*height);
    volume = (pi * (radius * radius))*height;
    cout<<"The surface area of the cylinder is: "<<area<<endl;
    cout<<"The volume of the cylinder is: "<<volume<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

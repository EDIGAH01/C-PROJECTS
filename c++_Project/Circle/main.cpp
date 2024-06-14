#include <iostream>

using namespace std;

int main()
{
    cout<< "calculating the circumference and area of a circle"<<endl;
    int radius,diameter;
    float circumference1, circumference2, area, pi;
    pi = 3.142;
    cout<<"Please enter the radius of the circle: "<<endl;
    cin>> radius;
    cout<<"Please enter the diameter of the circle: "<<endl;
    cin>>diameter;
    area = pi * (radius*radius);
    circumference1 = pi * (radius + radius);
    circumference2 = pi * diameter;
    cout<<"The area of the circle is: "<<area <<endl;
    cout<<"The circumference of the circle using the radius is: "<< circumference1<<endl;
    cout<<"The circumference of the circle using the diameter is: "<< circumference2 <<endl;
    cout << "Hello world!" << endl;
    return 0;
}

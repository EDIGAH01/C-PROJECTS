#include <iostream>

using namespace std;

int main()
{
    int base, height, hypotenuse, area, perimeter;
    cout<<"Calculating the are and perimeter of a triangle "<<endl;
    cout<<"Please enter the base of the triangle: "<<endl;
    cin>>base;
    cout<< "Please enter the height of the triangle: "<<endl;
    cin>>height;
    cout<<"Please enter the length of the hypotenuse: "<<endl;
    cin>> hypotenuse;
    area = 0.5 * (base * height);
    perimeter = base + height + hypotenuse;
    cout<<"The area of the triangle is: "<<area<< endl;
    cout <<"The perimeter of the triangle is: "<<perimeter<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

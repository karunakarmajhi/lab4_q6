//write a C++ program to enter the base and height of a triangle and find its area

//library
#include<iostream>
using namespace std;

//writing of the main function
int main(){

//declaration of the variables
float height;
float base;

//input statements
cout << "enter the height of a triangle";
cin >> height;
cout << "enter the base of a triangle";
cin >> base;

//process
cout << "The area of the triangle is " << height*(0.5*base)<<".\n";
//end
return 0;
}

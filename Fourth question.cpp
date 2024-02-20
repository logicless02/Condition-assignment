#include<iostream>
using namespace std;
int main ()
{
	float p=3.1415;
	float r;
	float h;
	cout<<"Enter the radius of a cylinder : ";
	cin>>r;
	cout<<"Enter the height of a cylinder : ";
	cin>>h;
	float V= p*r*r*h;
	cout<<"volume of the cylinder is : "<<V;
}


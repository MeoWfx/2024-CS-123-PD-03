#include<iostream>
using namespace std;
main()
  {
	int sides;
        long int sum;
	cout<<"Enter the sides of polygon";
	cin>> sides;

	cout<<"The sum of sides of internal angles of a "<<sides<<"-sided polygon is "<<(sides-2)*180;
  }
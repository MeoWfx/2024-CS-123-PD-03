#include<iostream>
using namespace std;
main()
  {
	int vi;
	int a;
	int t;
	int vf;

	cout<<"Enter initial velocity(m/s): ";
	cin>> vi;
	cout<<"Enter acceleration(m/s^2): ";
	cin>> a;
	cout<<"Enter time(s): ";
	cin>> t;

	cout<<"Final velocity(m/s): "<<(a*t)+vi;
  }
#include<iostream>
using namespace std;
main()
  {
	int n;
	int w;
	int h;
	
	cout<<" Number of square meters you can paint:";
	cin>> n;
	cout<<" Width of the single wall(in meters) :";
	cin>> w;
	cout<<" Height of the single wall(in meters) :";
	cin>> h;

	int  walls;
	cout<<"Number of Walls you can paint :"<< n/(w*h);
   }
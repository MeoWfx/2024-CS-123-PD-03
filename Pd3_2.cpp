#include<iostream>
using namespace std;
main()
  {
	int min;
	int frames;

	cout<<"Number of Minutes: ";
	cin>>min;
	cout<<"Frames per second: ";
        cin>>frames;

	long int n;
        cout<<"Total number of frames: "<<min*60*frames;
  }
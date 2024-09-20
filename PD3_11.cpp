#include<iostream>
using namespace std;
main()
  {
	int age;
	int times;
	int avg;
	
	cout<<" Enter the age of the person :";
	cin>> age;
	cout<<" Enter the number of times they have moved :";
	cin>> times;

	cout<<"Average number of years lived in a single house :"<< age/(times+1);
  }
#include<iostream>
using namespace std;
main()
  {
	int imp;
	int player;
	float chance;


	cout<<"Enter Imposter count:";
	cin>>imp;
	cout<<"Enter Player count:";
	cin>>player;

	cout<<"Chance of being an imposter:"<<((imp*100)/player)<<"%";
  }
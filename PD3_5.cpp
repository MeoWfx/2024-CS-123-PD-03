#include<iostream>
using namespace std;
main()
  {
	string name;
	int weight;
	float loss;
	
	cout<<" Enter the name of the person :";
	cin>> name;
	cout<<" Enter the target weight loss in kilogram :";
	cin>> weight;

	cout<< name <<" will need "<< weight*15 <<" days to lose " << weight << "kg by following the doctor's suggestion";
  }
	
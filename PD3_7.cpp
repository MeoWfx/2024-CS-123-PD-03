#include<iostream>
using namespace std;
main()
  {
	string name;
	int adult;
	int child;
	long int nAdult;
	long int nChild;
	int perCharity;
	long int total;
	long int charity;
        long int remaining;
	
	cout<<" Enter the name of the movie :";
	cin>> name;
	cout<<" Enter the adult ticket price :";
	cin>> adult;
	cout<<" Enter the child ticket price :";
	cin>> child;
	cout<<" Enter the number of adult tickets sold: ";
	cin>> nAdult;
	cout<<" Enter the number of child tickets sold: ";
	cin>> nChild;
	cout<<" Enter the percentage of the amount to be donated to charity: ";
	cin>> perCharity;

	cout<<"Movie : " << name;
	cout<<"Total amount generated from ticket sales :" << ((adult*nAdult)+(child*nChild))<<endl;
        cout<<"Donation to charity (" <<perCharity<<"%) :"<< ((adult*nAdult)+(child*nChild))/perCharity<<endl;
	cout<<"Remaining amount after donation :" << ((adult*nAdult)+(child*nChild))-(((adult*nAdult)+(child*nChild))/perCharity);
  }

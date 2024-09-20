#include<iostream>
using namespace std;
main()
  {
	int size;
	double cost;
	int area;
        double costPerPound;
	int costPerArea;
	
	cout<<" Enter the size of fertilizer bag in pounds :";
	cin>> size;
	cout<<" Enter the cost of the bag :";
	cin>> cost;
	cout<<" enter the area in square feet that can be covered by the bag :";
	cin>> area;
 
	cout<<"Cost of fertilizer per pound:"<< cost/size<<endl;
	cout<<"Cost of fertilizing per square foot:"<< cost/area;
  }
        
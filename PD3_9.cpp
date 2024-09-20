#include<iostream>
using namespace std;
main()
  {
	int num;
        cout<<"Enter number: ";
        cin>> num;

	int a=num%10;
	num = num/10;
        int b=num%10;
	num = num/10;
        int c=num%10;
	num = num/10;
        int d=num;

        int sum;
        cout<<"Sum of individual digit"<< a+b+c+d;
  }
            

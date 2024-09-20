#include<iostream>
using namespace std;
main()
  {
	float vegPrice;
	float fruPrice;
	int veg;
	int fruit;
        float total;
	
	cout<<" Enter vegetable price per kg (in coins) :";
	cin>> vegPrice;
	cout<<" Enter fruit price per kg (in coins):";
	cin>> fruPrice;
	cout<<" Enter total kilogram of fruit :";
	cin>> fruit;
        cout<<" Enter total kilogram of vegetable :";
	cin>> veg;

        cout<<"Total earning in Rupees (Rps):" << ((vegPrice*veg)+(fruPrice*fruit))/1.94;
 }

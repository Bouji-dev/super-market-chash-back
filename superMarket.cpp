#include<iostream>
using namespace std;

// creat cash back calculator

int s1, s2, s5, s10;
int amount;

void print() {

	if (s10 > 0) 
		cout << "The papar money (10000) T  : " << s10 << " PCS" << endl;
	if (s5 > 0) 
		cout << "The papar money (5000)  T  : " << s5 << " PCS" << endl;
	if (s2 > 0) 
		cout << "The papar money (2000)  T  : " << s2 << " PCS" << endl;	
	if (s1 > 0) 
		cout << "The papar money (1000)  T  : " << s1 << " PCS" << endl;
					 	 
	
}

int main() {
	s1, s2, s5, s10 = 0;
	
	cout << "How much do you want to give back ? :" << endl;
	cin >> amount;

	
	s10 = amount / 10000;
	amount %= 10000;

	s5 = amount / 5000;
	amount %= 5000;

	s2 = amount / 2000;
	amount %= 2000;

	s1 = amount / 1000;
	amount %= 1000;

	print();



}
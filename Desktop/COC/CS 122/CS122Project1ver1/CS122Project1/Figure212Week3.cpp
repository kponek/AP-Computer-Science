/*
Kevin Ponek
Figure212Week3.cpp
March 17, 2016
CS 122 Lab Project 1
Description: 
*/

#include <iostream>
using namespace std;
int main3 () {
	int guess;
	cout << "Enter a number 0 ... 15: ";
	cin >> guess;
	switch (guess) {
		case 0: cout << "0"; break;
		case 1: cout << "1"; break;
		case 2: cout << "2"; break;
		case 3: cout << "3"; break;
		case 4: cout << "4"; break;
		case 5: cout << "5"; break;
		case 6: cout << "6"; break;
		case 7: cout << "7"; break;
		case 8: cout << "8"; break;
		case 9: cout << "9"; break;
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
	 }
	cout << endl;
	system("pause");
	return 0;
}
//Documentation Section 

/*
File Name : Lab 20 
Author : Hamza Alsayed Almradny
Version : V.1 
Purpose : Absolute value of a number
Date : 21/7/2025
*/







#include <iostream> 
using namespace std;

int main() {

	float num;

	cout << "Enter the number: ";
	cin >> num;


	if (num < 0) {
		num = -num;
	
}

	cout << "The absolute number is " << num << "\n";









	return 0;
}
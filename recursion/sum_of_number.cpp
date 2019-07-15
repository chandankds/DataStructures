/*
 * sum_of_number.cpp
 *
 *  Created on: 12-Jul-2019
 *      Author: chandan
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sumOfNumbers(int num){
	if( num <= 0){
		return 0;
	}
	else{
		return num % 10 + sumOfNumbers(num/10);
	}
}

int mainnum(){
	int number;
	cout<<"Enter the number :: " << endl;
	cin >> number;
	cout << sumOfNumbers(number) << endl;
	return 0;
}




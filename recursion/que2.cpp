/*
 * que2.cpp
 *
 *  Created on: 12-Jul-2019
 *      Author: chandan
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int raiseToPower(int number, int power){
	if(power <= 0){
		return 1;
	}
	else{
		return number * raiseToPower(number, power -1);
	}
}

int mainPp(){
	int number , power;
	cout << "Enter the number and the power " << endl;
	cin >> number >> power;
	cout<< raiseToPower(number, power) << endl;
	return 0;
}




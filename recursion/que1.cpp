/*
 * que1.cpp
 *
 *  Created on: 12-Jul-2019
 *      Author: chandan
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int noOfCannonBalls(int cannonBalls){
	if(cannonBalls == 1)
		return 1;
	else{
		return cannonBalls + noOfCannonBalls(cannonBalls -1);
	}
}

int maincc(){
	int cannonBalls;
	cout<<"Enter the no of cannon Balls :: "<<endl;
	cin>>cannonBalls;
	cout << "No of cannon Balls :: " << noOfCannonBalls(cannonBalls) << endl;

	return 0;
}




/*
 * permutationsOfStrings.cpp
 *
 *  Created on: 12-Jul-2019
 *      Author: chandan
 */
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void permuteHelper(string str, string choose){
	if(str.empty()){
		cout << choose << endl;
	}
	else{
		for(int i = 0; i< str.length(); i++){
			//choose
			char c = str[i];
			choose += c;
			str.erase(i, 1);
			//explore
			permuteHelper(str, choose);
			//unchoose
			str.insert(i, 1, c);
			choose.erase(choose.length() - 1 , 1);

		}

	}
}

void permute(string str){
	permuteHelper(str, "");
}

int mainsree(){
	string str;
	cout << "Enter the string :: ";
	cin >> str;
	cout << endl;
	permute(str);
	return 0;
}







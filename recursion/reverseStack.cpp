/*
 * reverseStack.cpp
 *
 *  Created on: 15-Jul-2019
 *      Author: chandan
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseHelper(stack<int>& st, int val){
	if(st.empty()){
		st.push(val);
		return;
	}
	else{
		int temp = st.top();
//		cout << "value of temp is :: " << temp << endl;
		st.pop();
		reverseHelper(st, val);
		st.push(temp);

	}
}

void reverse(stack<int>& st){
	if(st.empty()){
		return;
	}
	else{
//		cout<<"inside reverse value of st.top is :: " << st.top() << endl;

		int temp = st.top();
		st.pop();
		reverse(st);
		reverseHelper(st, temp);
	}
}
int main(){
	stack<int> st,ans;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	/*while(!st.empty()){
			cout<<st.top()<<endl;
			st.pop();
		}*/
//	cout<<"_____________________________________________";
	reverse(st);
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}
	return 0;
}




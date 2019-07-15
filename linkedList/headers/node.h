/*
 * linklist.h
 *
 *  Created on: 15-Jul-2019
 *      Author: chandan
 */

#ifndef NODE_H_
#define NODE_H_
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class mylist;
class node{
private:
	int data;
	node* next;
public:
	node(int data);
	friend class mylist;
};

#endif /* NODE_H_ */

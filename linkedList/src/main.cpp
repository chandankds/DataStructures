/*
 * node.cpp
 *
 *  Created on: 15-Jul-2019
 *      Author: chandan
 */
#include"list.h"

int main() {
	mylist l;
	l.addAtLast(10);
	l.addAtLast(20);
	l.addAtLast(30);
	l.addAtLast(40);
	l.addAtLast(50);
	l.printList();
	l.deleteAtLast();
	cout<<endl;
	l.printList();

	return 0;
}





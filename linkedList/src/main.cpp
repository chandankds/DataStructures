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
	cout<<"count of Nodes :: " << l.countOfNodes() << endl;
	l.printList();
	l.deleteAtLast();
	l.addAtfirst(99);
	cout<<endl;
	l.printList();
	l.deleteAtFirst();
	cout<< endl;
	cout<<"count of Nodes :: " << l.countOfNodes() << endl;
	l.printList();
	cout<<endl<<"count of Nodes :: " << l.countOfNodes() << endl;
	l.addAt(2,69);
	l.printList();
	cout<< "node found at " <<l.searchNode(69) << endl;
	l.addAt(4,89);
	cout<<"count of Nodes :: " << l.countOfNodes() << endl;
	cout<<"middle of the list is :: " << l.findMiddle() << endl;

	return 0;
}





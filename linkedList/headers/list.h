/*
 * list.h
 *
 *  Created on: 15-Jul-2019
 *      Author: chandan
 */

#ifndef LIST_H_
#define LIST_H_

#include"node.h"

class mylist{
private:
	node* head;
	int cnt;
public:
	mylist();
	bool isListEmpty();
	int  countOfNodes();
	void addAtLast(int data);
	void deleteAtLast(void);
	void printList(void);
};




#endif /* LIST_H_ */

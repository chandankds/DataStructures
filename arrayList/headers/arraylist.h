/*
 * arraylist.h
 *
 *  Created on: 10-Jul-2019
 *      Author: chs
 */

#ifndef HEADERS_ARRAYLIST_H_
#define HEADERS_ARRAYLIST_H_
#include <iostream>
using namespace std;

class arraylist
{
private:
	int* myElements;
	int  mySize;
	int  myCapacity;
	void checkResize();
public :
	arraylist();
	void add(int element);
	int  get(int index);
	int  size();
	void clear();
	bool isEmpty();
	void set(int index, int element);
	void insert(int index, int element);
	void remove(int index);
};

ostream& operator <<(ostream& out, arraylist& list);


#endif /* HEADERS_ARRAYLIST_H_ */

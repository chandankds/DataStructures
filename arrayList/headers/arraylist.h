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
	int* myarray;
	int  myindex;
	int  mycapacity;
public :
	void addElement(int element);
	void insertElement(int index, int element);
};



#endif /* HEADERS_ARRAYLIST_H_ */

/*
 * arrayList.cpp
 *
 *  Created on: 11-Jul-2019
 *      Author: chandan
 */
#include "arraylist.h"

arraylist::arraylist(){
	myElements = new int[10]();
	mySize = 0;
	myCapacity = 10;
}

void arraylist::add(int value){
	myElements[mySize] = value;
	mySize++;
}

void arraylist::insert(int index, int element){
	for(int i = mySize; i > index; i--){
		 myElements[i] = myElements[i-1];
	}
	myElements[index] = element;
	mySize++;
}

int arraylist::get(int index){
	return myElements[index];
}

int arraylist::size(){
	return mySize;
}

void arraylist::clear(){
	for(int i=0; i<mySize; i++)
	{
		myElements[i] = 0;
	}
	mySize = 0;
}

bool arraylist::isEmpty(){
	return mySize == 0;
}

void arraylist::remove(int index){
	for(int i=index ; i< mySize; i++)
	{
		myElements[i] = myElements[i+1];
	}
	mySize--;
}

// I am overloading the operator so that i can print the list as a normal variable
//keep in mind to use the out instead of cout inside the operator overloading method
ostream& operator <<(ostream& out, arraylist& list){
	out<<"{";
	for(int i=0; i<list.size() ; i++)
	{
		out<< list.get(i) << ",";
	}
	out<<"}";
	return out;
}


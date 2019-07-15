//============================================================================
// Name        : linkedList.cpp
// Author      : chandan
// Version     :
// Copyright   : its gonna be buggy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include"node.h"
#include"list.h"

node:: node(int val){
	this->data = val;
	this->next = NULL;
}

bool mylist::isListEmpty(void){
	return (this->head == NULL);
}

int mylist::countOfNodes(void){
	return this->cnt;
}

mylist:: mylist(){
	this->head = NULL;
	this->cnt = 0;
//	cout<<"objected created sucessfully";
}

void mylist:: addAtLast(int data){
	node *newnode = new node(data);
	if(isListEmpty()){
		head = newnode;
		cnt++;
	}else{
		node* trav = head;
		while(trav->next != NULL){
			trav = trav->next;
		}
		trav->next = newnode;
		cnt++;
	}
}

void mylist::deleteAtLast(void){
	if(isListEmpty()){
		cout<<"List is empty"<<endl;
		return;
	}
	else{
		node* trav = head;
		while(trav -> next -> next != NULL){
			trav = trav->next;
		}
		delete trav->next;
		trav->next = NULL;
		cnt--;
	}
}

void mylist:: printList(void){
	node* trav = head;
	while(trav != NULL){
		cout<<trav->data << "->";
		trav = trav->next;
	}

}











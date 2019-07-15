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

void mylist::addAtfirst(int data){
	node* newnode = new node(data);
	if(isListEmpty()){
		newnode = head;
		cnt++;
	}
	else{
		node* temp = head;
		head = newnode;
		newnode->next = temp;
		cnt++;
	}
}

void mylist::deleteAtFirst(void){
	if(isListEmpty()){
		cout<<"list is empty"<< endl;
		return;
	}
	else{
		node* temp = head;
		head = temp ->next;
		delete temp;
		cnt--;
	}
}

void mylist:: printList(void){
	node* trav = head;
	while(trav != NULL){
		cout<<trav->data << "->";
		trav = trav->next;
	}
	cout<<endl;
}

void mylist:: addAt(int index, int data){
	node* newnode = new node(data);
	int i = 0;
	node* temp = NULL;
	node* trav = head;
	while(i != index){
		temp = trav;
		trav = trav->next;
		i++;
	}
	temp->next = newnode;
	newnode->next = trav;
	cnt++;
}


//lalallalallallalla








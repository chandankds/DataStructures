/*
 * queue.h
 *
 *  Created on: 08-Jul-2019
 *      Author: chandan
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include<iostream>
using namespace std;
#include<iomanip>
#include<cstdlib>

#define SIZE 5

class queue{
private:
	int* arr;
	int front;
	int rear;
	int size;
public:
	queue();
	bool is_queue_empty();
 	bool is_queue_full();
	void enqueu(int ele);
	void dequeue(void);
	int get_front(void);
	void print_queue(void);
	void resize(void);
};

int menu();
enum menu_choice{ EXIT, ENQUEUE, DEQUEUE, GETFRONT,PRINT };

#endif /* QUEUE_H_ */

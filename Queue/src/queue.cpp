/*
 * main.cpp
 *
 *  Created on: 08-Jul-2019
 *      Author: chs
 */
#include"queue.h"

	queue::queue()
	{
		size = SIZE;
		arr = new int[size];
		this->front = -1;
		this->rear = -1;

	}

	void queue::print_queue(){
		for(int i=front ; i<=(rear +1) % size; i++){
			cout<<arr[i]<<"->";
		}
		cout<<endl;
	}

	bool queue:: is_queue_empty()
	{
		return (rear == -1 && front == rear );
	}

	bool queue:: is_queue_full()
	{
		return (front == (rear+1) % size );
	}

	void queue:: enqueu(int ele)
	{
		if(is_queue_full()){
			cout<<"RESIZED GOT CALLED"<<endl<<endl;
			resize();
		}
		//- increment value of rear by 1
			rear = ( rear + 1 ) % size;
			//- push ele into the queue at rear position
			cout<<"value of rear is now :: " << rear << "  value of size is now :: " << size<< endl;
			arr[ rear ] = ele;
			cout<<"element is added to the rear"<< endl;
			if( front == -1 )
				front = 0;
	}

	void queue:: dequeue(void)
	{
		//if we are deleting last ele -- reinitialize queue
		if( front == rear )
			front = rear = -1;

		else//- increment the value of front by 1 -- delete ele from queue
		front = (front+1) % size;
	}

	int queue:: get_front(void)
	{
		return ( arr[ front ] );
	}

	void queue:: resize(){
		int* biggi = new int[size*2];
		cout<<endl<<endl<<"front = "<<front<<" rear = "<<rear<<endl;
		for(int i=front; i <= (rear +1)%size; i++)
		{
			biggi[i] = arr[i];
			cout<<"biggi = "<<biggi[i]<<" arr = "<<arr[i]<<endl;
		}
		arr = biggi;
		size = size *2;
		delete[] arr;

	}


	int menu()
	{
		int choice;
		cout << "CIRCULAR QUEUE:" << endl;
		cout << "0. EXIT" << endl;
		cout << "1. ENQUEUE" << endl;
		cout << "2. DEQUEUE" << endl;
		cout << "3. GETFRONT" << endl;
		cout << "4. PRINT" << endl;
		cout << "enter the choice: ";
		cin >> choice;
		return choice;
	}

















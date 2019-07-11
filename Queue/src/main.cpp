/*
 * main.cpp
 *
 *  Created on: 08-Jul-2019
 *      Author: chandan
 */
#include"queue.h"

int main(void)
{
	queue q;

	while(1)
	{
		int choice = menu();
		switch(choice)
		{
		case EXIT: exit(0);

		case ENQUEUE: //push ele into the queue at rear position
//			if( !q.is_queue_full())
//			{
				int ele;
				cout << "enter an ele: ";
				cin >> ele;
				q.enqueu(ele);
				cout << ele << " inserted into the queue successfully..." << endl;
//			}
//			else
//				cout << "queue overflow !!!" << endl;
			break;

		case DEQUEUE: //delete ele from the queue which is at front pos
			if( !q.is_queue_empty())
			{
				int ele = q.get_front();
				q.dequeue();
				cout << "deleted ele is : " << ele << endl;
			}
			else
				cout << "queue underflow !!!" << endl;
			break;

		case GETFRONT://get the value of an ele at the front position
			if( !q.is_queue_empty())
			{
				int ele = q.get_front();
				cout << "ele at front position is : " << ele << endl;
			}
			else
				cout << "queue underflow !!!" << endl;
			break;
		case PRINT: q.print_queue();
			break;
		}
	}
	return 0;
}


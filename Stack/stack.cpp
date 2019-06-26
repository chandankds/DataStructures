/*
 * stack.cpp
 *   It can grow dynamically and keeps track of minimum element as well.
 *  Created on: 25-Jun-2019
 *      Author: chs
 */
#include<iostream>
#include<iomanip>

using namespace std; // @suppress("Symbol is not resolved")
#define DEFAULT_SIZE 5

class stack{

    private:
	int top;
	int* Arr = NULL;
	int length = 0;
    public:
	stack(void) // @suppress("Cl4ass members should be properly initialized")
	{
		this->Arr = new int[DEFAULT_SIZE];
	    for(int i=0; i<DEFAULT_SIZE; i++)
	    {
		Arr[i] = 0;
	    }
	    this->top = -1;
	    length += DEFAULT_SIZE;
	}

	int* resize_array(int* Arr)
	{
		int* newArr = new int[length + DEFAULT_SIZE];
		for(int i =0; i < length; i++ ){
			newArr[i] = Arr[i];
		}
		length += DEFAULT_SIZE;
		delete Arr;
		return newArr;
	}

	bool isEmpty(void)
	{
	    return (top == -1);
	}

	bool isFull(void)
	{
	    return (top == length -1);
	}

	void push(int element)
	{
	    if(isFull())
	    {
	    	Arr = resize_array(Arr);
	    	cout<<"stack is full extending stack "<<endl;
	    }
		Arr[++top] = element;
	}

	int pop(void)
	{
	    if(isEmpty())
	    {
		cout<<"stack is empty "<<endl;
		return 0;
	    }
	    else
	    {
		int value = Arr[top];
		Arr[top--] = 0;
		return value;
	    }
	}

	int peek(void)
	{
	    return Arr[top];
	}

	void print(void)
	{
	    for(int i=0; i<length; i++)
	    {
		cout<<Arr[i]<<"->";
	    }
	    cout<<endl;
	}

	~stack(){
		delete Arr;
	}

};

int menuChoices(void)
{
    int choice;
    cout << "DYNAMIC STACK OPERATIONS:" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. PUSH" << endl;
    cout << "2. POP" << endl;
    cout << "3. PEEK" << endl;
    cout << "4. PRINT" << endl;
    cout << "5. MIN" << endl;
    cout << "enter the choice: ";
    cin >> choice;
    return choice;
}

enum menuChoice{EXIT,PUSH,POP,PEEK,PRINT,MIN};

int main(void)
{
    stack s,min;
    while(1)
    {
	int choice = menuChoices();
	switch(choice)
	{
	    case EXIT :
		{
		    exit(0);
		}
	    case PUSH :
		{
		    int element;
		    cout<<"enter the element to add :: ";
		    cin>>element;
		    if(s.isEmpty())
		    {
			s.push(element);
			min.push(element);
		    }
		    else if( element > min.peek())
		    {
			s.push(element);
		    }
		    else
		    {
			s.push(element);
			min.push(element);
		    }
		}break;
	    case POP :
		{
		    int element;
		    if(s.peek() == min.peek())
		    {
			min.pop();
			element = s.pop();
			cout<<"element popped from both stacks :: "<<element<<endl;
		    }
		    else
		    {
			element = s.pop();
			cout<<"element popped :: "<<element<<endl;
		    }
		}break;
	    case PEEK :
		{
		    int element;
		    element = s.peek();
		    cout<<"element at top :: "<<element<<endl;
		}break;
	    case PRINT :

		s.print();
		break;
	    case MIN :
		int element;
		element = min.peek();
		cout<<"min element  :: "<<element<<endl;
		break;
	}
    }
    return 0;
}


























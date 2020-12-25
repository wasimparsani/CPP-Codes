#include<bits/stdc++.h>
using namespace std;

class Queue
{
	private:
	int size, front, rear, *q;
	public:
		Queue(){front=rear=-1; size=10; q=new int[size];}
		Queue(int size){front=rear=-1; this->size=size; q=new int[this->size];}
		void enque(int x);
		int deque();
		void display();
};

void Queue::enque(int x)
{
	if(rear == size-1)
		cout<<"\nQueue is full\n";
	else
	{
		rear++;
		q[rear]=x;
	}
}

int Queue::deque()
{
	int x=-1;
	if(front == rear)
		cout<<"\nQueue is empty\n";
	else
	{
		front++;
		x=q[front];
	}
	return x;
		
}

void Queue::display()
{
	for(int i=front+1;i<=rear;i++)
		cout<<q[i]<<" ";
	cout<<endl;
}

int main()
{
	int ch,x;
	Queue q1(5);
	do {
		cout<<"\nEnter your Choice\n1.To Insert element in Queue\n2.To Delete an element from Queue\n\n Enter '00' to Exit -->\n";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter the element to insert = ";
					cin>>x;
					q1.enque(x);
					q1.display();
					break;
			case 2: cout<<"The Deleted Element is = "<<q1.deque()<<"\n";
					q1.display();
					break;
			default:break;
		}
	}while(ch != 00);
	return 0;
	
}

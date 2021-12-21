#include<iostream>
using namespace std;

int front=-1;
int rear=-1;
void enqueue(int queue[],int n,int x)
{
	if(rear==n-1)
	{
		cout<<"queue is full"<<endl;
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}
void dequeue(int queue[],int n)
{
	if(front==-1 && rear==-1)
	{
		cout<<"queue is empty"<<endl;		
	}
	else if(front==rear)
	{
	 front=rear=-1;
	}
	else
	{   cout<<"dequeue element is"<<queue[front];
		front++;
	}
}
void display(int queue[],int n)
{
	if(front==-1 && rear==-1)
	{
		cout<<"queue is empty"<<endl;
	}
	else {
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<<" ";
		}
	}
	cout<<endl;
}
 void peek(int queue[],int n)
 {
 	if(front==-1 && rear==-1)
	{
		cout<<"queue is empty"<<endl;
	}
	else
	{
		cout<<"PEEK ELEMENT IN QUEUE IS "<<queue[front]<<endl;
	}
 }
int main()
{    
	int n;
      cout<<"-----------------QUEUE PROGRAM-------------------"<<endl;
      cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
      cout<<endl;
      cout<<"enter the size of queue"<<endl;
      cin>>n;
      int queue[n];
      
      cout<<"1.Enqueue"<<endl;
      cout<<"2.Dequeue"<<endl;
      cout<<"3.peek element"<<endl;
      cout<<"4.display"<<endl;
       cout<<"Note:"<<endl<<"1.PRESS NUMBER 1,2,3,4 AS YOUR PREFERENCE"<<endl<<"enter -1 to exit program"<<endl;
      	int choice;
      while(choice!=-1)
    {
         cout<<endl;
     	 cout<<"enter choice"<<endl;
      	cin>>choice;
      	cout<<"-----------------------------------------"<<endl;
     
      	switch(choice)
     	{
      		case 1:
			{
      			cout<<"enter the number of element you want to enqueue"<<endl;
      			int k;
      			cin>>k;
      			int x;
      			for(int i=0;i<k;i++)
      			{	cout<<"enter number"<<endl;
      			    cin>>x;
      				enqueue(queue,n,x);
	  			}
				break;
		 	}
      		case 2:
      		{   
      			dequeue(queue,n);
      			break;
			}
			case 3:{
				peek(queue,n);
				break;
			}
			case 4:{
				display(queue,n);
				break;
			}
		}
   
	}
  return 0; 
}

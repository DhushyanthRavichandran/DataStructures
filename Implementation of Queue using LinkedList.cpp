#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void enqueue (int data)
{
  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = data;
  newnode->next = 0 ;
  if (front == 0 && rear == 0)
	{
	  front = rear = newnode;
	}
  else
  
	{
	  rear->next = newnode;
	  rear = newnode;
	  printf ("%d is added to the queue\n", rear->data);

	}
}

void dequeue ()
{
  struct node *temp;
  temp = front;
  if (front == 0 && rear == 0)
	{
	  printf ("the queue is full");
	  printf ("\n");

	}
  else
	{
	  printf("\ndequeued element is ");
	  front = front->next;
	  free (temp);
	}
}

void display ()
{
  struct node *temp;
  temp = front;
  if (front == 0 && rear == 0)
	{
	  printf ("the queue is full");
	  printf ("\n");
	}
  printf("\nthe elements present in the queue are: ");
  while (temp != 0)
	{
	  printf ("%d ", temp->data);
	  temp = temp->next;
	}
}

void peek ()
{
  if (front == 0 && rear == 0)
	{
	  printf ("the queue is full");
	  printf ("\n");
	}
  printf ("\npeeked element is %d", front->data);
}

int main ()
{
  enqueue (5);
  enqueue (0);
  enqueue (-3);
  display ();
  dequeue ();
  peek ();
  display ();
}

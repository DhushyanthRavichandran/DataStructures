#include<stdio.h>
#define MAX_SIZE 100
typedef struct
{
  int arr[MAX_SIZE];
  int front, rear;
} Queue;

void
initialize (Queue * queue)
{
  queue->front = queue->rear = -1;
}

void
enqueue (Queue * queue, int element)
{
  if (queue->rear == MAX_SIZE - 1)
	{
	  printf ("queue is full");
	  return;

	}
  if (queue->front == -1)
	{
	  queue->front = 0;
	}
  //here queue->rear value =-1 and when incrmenting arr[0] will be get
  queue->arr[++queue->rear] = element;
}

int
dequeue (Queue * queue)
{
  if (queue->front == -1 || queue->front > queue->rear)
	{
	  printf ("queue is underflow");
	  return -1;
	}
  int element = queue->arr[queue->front++];
  if (queue->front > queue->rear)
	{
	  initialize (queue);
	}
  return element;
}


int
main ()
{
  Queue queue;
  initialize (&queue);

  enqueue (&queue, 10);
  enqueue (&queue, 20);
  enqueue (&queue, 30);

  printf ("Front element: %d\n", front (&queue));
  printf ("Rear element: %d\n", rear (&queue));

  printf ("Dequeued element: %d\n", dequeue (&queue));

  printf ("Front element after dequeue: %d\n", front (&queue));

  return 0;
}

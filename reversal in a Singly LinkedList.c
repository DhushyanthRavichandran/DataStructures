#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head = NULL;
struct node *temp = NULL;

void addNode (int data)
{
  struct node *newnode = (struct node *) malloc (sizeof (struct node));
	newnode->data = data;
  newnode->next = NULL;
  printf ("%d is added to the list\n", newnode->data);
  if (head == NULL)
	{
	  head = temp = newnode;
	}
  else
	{
	  temp->next = newnode;
	  temp = newnode;
	}
}

void display ()
{
  struct node *display;
  display = head;
  if (head == NULL)
	{
	  printf ("%d", display->data);
	  return;
	}
	printf("the elements in the list are: \n");
  while (display != NULL)
	{
	  printf ("%d ", display->data);
	  display = display->next;
	}
}

void reverse(){
	struct node*prevnode,*currentnode,*nextnode;
	prevnode=0;
	currentnode=head;
	nextnode=head;
	while(nextnode!=NULL){
		nextnode=head->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=nextnode;
}

int main ()
{
  addNode (1);
  addNode (2);
  addNode (3);
  addNode (4);
  display ();
  reverse();
  printf("\nReversed list:\n");
  display();
  return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;
struct node *temp = NULL;

void creation (int data)
{
  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = data;
  newnode->next = 0;
  printf ("%d is added to the list\n", newnode->data);
  if (head == NULL)
	{
	  temp = head = newnode;
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
  printf ("the elements present in the list are\n");
  if (head == NULL)
	{
	  printf ("%d", head->data);
	}
  else
	{
	  while (display != NULL)
		{
		  printf ("%d ", display->data);
		  display = display->next;
		}
	}
  printf ("\n");
}

void InsertionAtStart (int data)
{
  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = data;
  newnode->next = head;
  head = newnode;
}

void InsertionAtEnd (int data)
{
  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (newnode));
  newnode->data = data;
  newnode->next = 0;
  temp->next = newnode;
  temp = newnode;
}

int noOfNode ()
{
  int noNode = 1;
  struct node *n;
  n = head;
  while (n->next != NULL)
	{
	  noNode++;
	  n = n->next;
	}
  return noNode;

}


void InsertionAtPostion (int data, int pos)
{
  int i = 0;
  if (noOfNode () < pos)
	{
	  printf ("Invalid Position entered");
	}
  else
	{
	  struct node *insert;
	  struct node *newnode;
	  newnode = (struct node *) malloc (sizeof (struct node));
	  newnode->data = data;
	  newnode->next = NULL;
	  insert = head;
	  while (insert->next != NULL && i > pos - 1)
		{
		  insert = insert->next;
		  i++;
		}

	  newnode->next = insert->next;
	  insert->next = newnode;
	}

}

int main ()
{
  creation (5); //5 is added
  creation (10);//10 is added
  creation (15);//15 is added
  display (); //5 10 15				

  InsertionAtStart (1); //1 is added at the beginning
  display ();	        // 1 5 10 15

  InsertionAtEnd (20);  //1 5 10 15 20
  display ();					
  InsertionAtEnd (20);  
  printf ("no of nodes %d\n", noOfNode ()); //6
  InsertionAtPostion (2, 1);     //1 2 5 10 15 20 20
  display ();
  printf ("no of nodes %d", noOfNode ());  //7
  return 0;
}

    
    
    
    
    
    

#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *temp, *head = NULL;

void create (int data)
{
       struct node*temp;

  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = data;
  newnode->next = NULL;
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
       struct node*temp;

  temp = head;
  if (head == NULL)
	{
	  printf("list is empty");
	  return;
	}

	  while (temp != NULL)
		{
		  printf ("%d ", temp->data);
		  temp = temp->next;
		}
		printf("\n");
	}


void insertbeg (int data)
{
       struct node*temp;

  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = data;
  newnode->next = head;
  head = newnode;
}

void insertend (int data)
{
       struct node*temp;

  struct node *newnode;
  newnode = (struct node *) malloc (sizeof (struct node));
  newnode->data = data;
  newnode->next = NULL;
  temp = head;
  while (temp->next != NULL)
	{
	  temp = temp->next;
	}
  temp->next = newnode;

}

int noElements ()
{
       struct node*temp;

    if (head == NULL)
        return 0;
  temp = head;
  int count = 0;
  while (temp != NULL)
	{
	  temp = temp->next;
	  count++;
	}
  return count;
}



void insertposition (int pos, int data)
{

  if (noElements () < pos)
	{
	  printf ("Given position is invalid");
	  return;
	}
  else
  
	{
	  struct node*temp;
	  struct node *newnode;
	  newnode = (struct node *) malloc (sizeof (struct node));
	  newnode->data = data;
	  newnode->next = NULL;
	  int i = 1;
	  temp = head;
	  while (i < pos - 1)
		{
		  temp = temp->next;
		  i++;
		}
	  newnode->next = temp->next;
	  temp->next = newnode;

	}
}

  void deletebeg ()
  {
   struct node*temp;
	temp=head;
	if (head == NULL)
	  {
		printf ("List is empty");
	  }
	head = head->next;
	free (temp);

  }
  
  

  void deleteend() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL) {
        head = NULL;
    } else {
        prev->next = NULL;
    }
    free(temp);
}


  
  
void deleteatpos(int pos) {
    if (pos < 1 || pos > noElements()) {
        printf("Invalid position\n");
        return;
    }
    if (pos == 1) {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    int count = 1;
    while (temp != NULL && count < pos) {
        prev = temp;
        temp = temp->next;
        count++;
    }
    prev->next = temp->next;
    free(temp);
}

  int main ()
  {
	create (1);
	create (2);
	create (3);
	create (4);

	printf ("Original list: ");
	display ();

	insertbeg (0);
	printf ("List after inserting at beginning: ");
	display ();

	insertend (5);
	printf ("List after inserting at end: ");
	display ();

	insertend (6);
	printf ("List after inserting at end again: ");
	display ();

	deletebeg ();
	printf ("List after deleting from beginning: ");
	display ();

	deleteend ();
	printf ("List after deleting from end: ");
	display ();

	deleteatpos (2);
	printf ("List after deleting at position 2: ");
	display ();

  }

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node * top=0;

void push(int data){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
   
    newnode->data=data;
    newnode->link=top;
    top=newnode;
    printf("%d is pushed into the stack ",data);
    
        printf("\n");

    //every time a value is pushed in to the newnode is created, the address of the new node is stored 
    //in the newnode . and the top's previous value 0 is replaced by the newnode's address
    
}
void pop(){
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("the stack is empty");
    }
    printf("%d is poped out of stack",top->data);
    // or we can use temp->data instead of top->data bcoz both has the same value
        printf("\n");

    top=top->link;
    //as like before we can use top=temp->link instead of top=top->link
    free(temp);
}

void peek(){
    struct node *temp;
    if(top==0)
    {
        printf("the stack is empty");
            printf("\n");

    }
    printf("%d is poped out of stack",top->data);
        printf("\n");

}

void display(){
    struct node* temp;
    temp=top;
    if(top==0){
        printf("the stack is empty");
    }
        printf("elements in the stack are ");

    while(temp!=0)
    {
        printf("%d ",temp->data);
        
            temp=temp->link;
    }
        printf("\n");


}

int main(){

   push(2);
   push(3);
   push(10);
   display();
   peek();
   pop();
   peek();
   display();
}
    
    
    
    
    
    
    
    

















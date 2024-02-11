/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#define MAx_SIZE 100
typedef struct{
    int arr[MAx_SIZE];
    int top;
}Stack ;
//wew must initialize stack before using it, 
//fofr initialization we do top as -1 
//which denotes the empty stack



void initialize(Stack *stack){
    stack->top=-1;
}
//here the stack's top value is -1




void push(Stack *stack,int element){
    if(stack->top==MAx_SIZE-1){
        printf("Stack overflow");
    return;}
    stack->arr[++stack->top]=element;
    //here the first time the value which is previously -1 is incremented
    //to 0. which means the arr[0]=element
}


int pop(Stack *stack){
    if(stack->top==-1){
        printf("stack is underflow");
       return -1; 
    }
    return stack->arr[stack->top--];
    
}

//in pop operation we do post decremenet operator to display and
//and decremenet
//but in peek we only use return not a decrement operator

int peek(Stack *stack){
    if(stack->top==-1){
        printf("Stack is empty");
        
    }
    return stack->arr[stack->top];
}

int main(){
    Stack stack;
    initialize(&stack);
push(&stack,10);
push(&stack,20);
push (&stack, 30);  
  
printf("Top element: %d\n", peek(&stack));  
  
printf("Popped element: %d\n", pop(&stack));  
  
printf("Top element after popping: %d\n", peek(&stack));  
  
    return 0;  
}  

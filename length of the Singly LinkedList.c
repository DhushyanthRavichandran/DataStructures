#include<stdio.h>
int main(){
	struct node* temp;
	int count=0;
	temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("%d",count);
	
}
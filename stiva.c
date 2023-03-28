#include "stiva.h"
char top(Node *top){
	if (isEmpty(top)) return INT_MIN;
	return top->val;
} 

void push(Node**top, char v) {
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=*top;
	*top=newNode;
}

char pop(Node**top) {
	if (isEmpty(*top)) return INT_MIN;
	Node *temp=(*top); 		
	char aux=temp->val;	
	*top=(*top)->next;      		
	free(temp);
	return aux;
}

int SisEmpty(Node*top){
	return top==NULL;
}
	
void deleteStack(Node**top){
	Node  *temp;
	while (!isEmpty(*top))
		temp=*top;
		*top=(*top)->next;
		free(temp);
	}

void functie(Node **start )
{
	int i;
	char c[]={'(', '(', ')', '('};
	for(i = 0 ; i < 4 ; i++)
	{
		push(& start, c[i]);
	}
}

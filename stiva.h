#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	char val;
	struct Node *next;
}Node;

char top(Node *top);
char pop(Node**top);
int SisEmpty(Node*top);
void deleteStack(Node**top);

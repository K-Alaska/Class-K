#include "stdlib.h"
#include "Queue.h"
#include "stdio.h"

Queue::Queue()
{
	head = NULL;
	tail = NULL;
}

void Queue::print()
{
	printf("start print queue\n");
	Node *current = head;
	while( current != NULL )
	{
	 printf("%d ", current->value);
	 current = current->next;
	}
	printf("\n");
}

void Queue::push(int value)
{
	Node* node = new Node();
	node->value = value;
	node->next = NULL;
	if(head == NULL)
	{
	 tail = head = node;
	}
	else
	{
	 tail->next = node;
	 tail = node;
	}
}

int Queue::pop()
{
	int value = head->value;
	
	Node *toRemove = head;
	head = head->next;
	
	delete toRemove;

	return value;
}

Queue::~Queue()
{
	Node* current = head;
	while( current != NULL )
	{
	 Node *toRemove = current; 
	 current = current->next;
	 delete toRemove;
	}
}

	 


//doubly linkedlist program
//it contain 4 functions
//InsertAtHead(),InsertAtTail(),print(),reverse_print() 

#include <stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* prev;
	struct node* next;
};
struct node* head;
struct node* GetNewNode(int x)
{
	struct node* newNode = (struct node*) malloc(sizeof(struct node));
        newNode->data = x;
        newNode->prev = NULL;
        newNode->next = NULL;
	return newNode;

}


void InsertAtHead(int x)
{
	struct node* newNode = GetNewNode(x);
	//printf("%d",temp1->data);
	//first condition: if list is empty
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	else {
		head->prev = newNode;
        	newNode->next = head;
        	head = newNode;
	}
	
}
void print()
{
	//create a new pointer node
	struct node* temp = head;
	printf("forward: ");
	//Traverse it and take a value of it  
	while (temp != NULL)
	{
		printf("%d,",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void reverse_print()
{
	struct node* temp = head;
	//when list is empty
	if (temp == NULL)
		return;
	//going to the last node
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	printf("reverse: ");
	while (temp != NULL)
	{
		printf("%d,",temp->data);
		temp = temp->prev;
	}
	printf("\n");

}

void InsertAtTail(int x)
{
        struct node* newNode = GetNewNode(x);
        //first condition: if list is empty
        if (head == NULL)
        {
                head = newNode;
                return;
        }
	//create a new pointer node to traverse it at the last node
	struct node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	//update the links
	temp->next = newNode;
	newNode->prev = temp;

}


int main()
{
	head = NULL;

	InsertAtHead(2);print();reverse_print();
	InsertAtHead(4);print();reverse_print();
	InsertAtHead(6);print();reverse_print();
	InsertAtHead(8);print();reverse_print();
	InsertAtTail(15);print();reverse_print();
	InsertAtTail(20);print();reverse_print();
	InsertAtTail(25);print();reverse_print();
	InsertAtTail(30);print();reverse_print();

	return 0;
}

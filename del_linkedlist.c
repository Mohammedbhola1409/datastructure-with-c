//program for deleting the node at nth position

#include<stdio.h>
#include<stdlib.h>

//define a node which is structure with two field,
//one for data and another for storing the address of next node.
struct node {             
	int data;
	struct node* next;
};
struct node* head;       //globally defined
void insert(int data)
{
	//create a new node
	struct node* temp1 = (struct node*) malloc(sizeof(struct node));
	temp1->data = data;
	temp1->next = NULL;
	if (head == NULL)
	
		head = temp1;
	else
	{
		//create a new pointer node temp2	
		struct node* temp2 = head;
		while(temp2->next != NULL)
		{
			temp2++;
		}
		temp2->next = temp1;
	}

}

void print()
{
	struct node* temp = head;
	while (temp != NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}
void Delete(int n)
{
	struct node* temp = head;
	if (n == 1)
	{
		head = temp->next;
		free(temp);
		return;
	}
	//delete rest of the position element
	n--;
	while (n != 1)
	{
		temp = temp->next;
		n--;
	}

	//create another new pointer node
	struct node* temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);   //delete temp2 to deallocate it 
	
}
int main()
{
	head = NULL;   //empty list
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	print();
	int n;
	printf("state the position\n");
	scanf("%d",&n);
	Delete(n);
	printf("\n");
	print();
	return 0;
}

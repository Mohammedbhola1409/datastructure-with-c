#include <stdio.h>
#include  <stdlib.h>

struct node {
	int value;
	struct node *next;
};
int data;
typedef struct node data_node;
data_node *head_node=0;
data_node *first_node=0;
data_node *temp_node=0;
data_node *previous_node=0;
data_node *next_node=0;

int input;
void insert()
{
	printf("insert the value here\n");
	scanf("%d",&input);
	temp_node=(data_node *) malloc(sizeof (data_node));
	temp_node->value =input;
	if (first_node==0)
	{
		first_node = temp_node;
	}
	else {
		head_node->next = temp_node;
	}
	temp_node->next = 0;//we can simply write temp_node->next = head_node// instead of having this 2 line(22,26)
	head_node = temp_node;
}

void display()
{
	temp_node = first_node;
	int count = 0;
	while (temp_node != 0)
	{

		printf("%d",temp_node->value);
		printf("\n");
		count++;
		temp_node = temp_node -> next;
	}
}
void count()
{
	temp_node = first_node;
	int count = 0;
	while (temp_node != 0)
	{
		count++;
		temp_node = temp_node -> next;
	}
	printf("total count of element in linked list%d",count);
}
void sort()
{
	temp_node = first_node;
	int count = 0;
	while (temp_node != 0)
	{
		count++;
		temp_node = temp_node -> next;
	}
	printf("count of element%d",count);
	//for (i=0;i<count;i++)
	//{
	//	if (count[i]
}
	


		
int main()
{

	char a;
	int choice;
	do
	{

	printf("1.insert\n");
	printf("2.traverse\n");
	printf("3.delete\n");
	printf("4.reverse\n");
	printf("5.append\n");
	printf("6.concat\n");
	printf("7.sort\n");
	printf("8.count\n");
	printf("9.search\n");
	printf("1o.display\n");

	printf("plz choose any of the operation\n");

	
	scanf("%d",&choice);
	//printf("%d\n",choice);
	switch (choice)
	{
		case 1:
			insert();
			printf("insertion completed successfully\n");
			break;

		case 2:
                         //traverse();
                         printf("traversion completed successfully\n");
                         break;

		case 3:
                         //delete();
                         printf("deletion completed successfully\n");
                         break;
		case 4:
                         //reverse();
                         printf("reverse completed successfully\n");
                         break;
		case 5:
                         //append();
                         printf("append completed successfully\n");
                         break;
		case 6:
                         //concat();
                         printf("concat completed successfully\n");
                         break;
		case 7:
                         sort();
                         printf("sort completed successfully\n");
                         break;
		case 8:
                         count();
                         printf("count completed successfully\n");
                         break;
		case 9:
                         //search();
                         printf("search completed successfully\n");
                         break;
		case 10:
                         display();
                         printf("display completed successfully\n");
                         break;
	}
	printf("type n to terminate the program\ntype y to continue the program\n");
	scanf("%s",&a);
	}
	while(a=='y'||a=='Y');
        //scanf("%c",&a);	


	return 0;
}


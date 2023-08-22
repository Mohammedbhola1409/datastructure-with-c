//Example of stack
//Balanced parentheses using stack

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxsize 51
char stack[maxsize];
char top = -1;

int empty()
{
	if (top == -1)
	{
		return 1; 
	}
	return 0;
}
void push(char item)
{
	if (top == maxsize-1)
	{
		printf("stack overflow");
	}
	else
	{
		stack[++top] = item;
	}
}

int pop()
{
	if (empty())
	{
		printf("stack is underflow");
	}

	return stack[top--];
}

int pair(char val1,char val2)
{
	if (val1 == '(' && val2 == ')' || val1 == '{' && val2 == '}' || val1 == '[' && val2 == ']')
	{
		return 1;
	}

	return 0;
}


int main()
{
	int i = 0;
	char exp [maxsize];

	fgets(exp,maxsize,stdin);
	for (i=0;i<strlen(exp);i++)
	{
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
		{
			push(exp[i]);
		}

		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if (empty())
			{
				push(exp[i]);
				printf("opening parantheses is absense\n");

			}

			else if (pair(stack[top],exp[i]))
			{
				pop();
			}
			//else
			//	printf("no matching... invalid expression"); 
		}
	}
	
	if (empty())
	{
		printf("parantheses balanced\n");
	}

	else
	{
		printf("parantheses not balanced\n");

	}

	return 0;
}

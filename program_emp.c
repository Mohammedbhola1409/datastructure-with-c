//to open and print the file//

#include <stdio.h>

void main()
{
	FILE *file1;
	char x;
	file1 = fopen("employee.txt","r");
	while (1)
	{
		x = fgetc(file1);
		if (x == EOF)
			break;
			printf("%c",x);
	}
	fclose(file1);

}

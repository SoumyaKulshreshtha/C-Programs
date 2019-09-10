//Program to read the contents of a file and print them on the screen
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	FILE *fp = fopen("fopen.txt", "r");
	if (fp == NULL)
	{
		puts("Couldn't open file");
		exit(0);
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf ("%c", ch);
		}
		fclose(fp);
	}
	return 0;
}

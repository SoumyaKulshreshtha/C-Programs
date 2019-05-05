//Program to count the number of characters and the number of new lines in the file given by the user
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	int char_count=0;
    int line_count=0;
    char filename[20];
    printf("Enter your file name: ");
    scanf("%s",filename);
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		puts("Couldn't open file");
		exit(0);
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			char_count++;
			if(ch=='\n')
				line_count++;
		}
		printf("The number of characters in the file is %d and lines are %d",char_count,line_count);
		fclose(fp);
	}
	return 0;
}

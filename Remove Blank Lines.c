//Program to remove all blank lines in the file given by the user and print it.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
    int flag;
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
		if (ch == '\n') 
            	{
			if (!flag)
			{
                		flag = 1;
                		printf("%c",ch);
           		 }
        	}
		else
		{
            		flag = 0;
            		printf("%c",ch);
       	 	}
        }
		fclose(fp);
	}
	return 0;
}

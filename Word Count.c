//Program to count the number of words in the file given by the user
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char word[100];
	int word_count=0;
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
		while(1)
		{
            fscanf(fp,"%s ",word);
						++word_count;
            if(feof(fp))
                break;
		//	++word_count;
		}
		printf("The number of words in the file is %d \n",word_count);
		fclose(fp);
	}
	return 0;
}

//Program to check if a word entered by the user is present in the file given by the user or not
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	char word[100];
    char Word_search[100];
	int word_count=0;
    char filename[20];
    int flag=0;
    printf("Enter your file name: ");
    scanf("%s",filename);
    printf("\n Enter your word: ");
    scanf("%s", Word_search);
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("\n Couldn't open file");
		exit(0);
	}
	else
	{
		while(1)
		{
            fscanf(fp,"%s ",word);
		    if(strcmp(Word_search,word)==0)
                flag=1;   
            if(feof(fp))
                break;
		}
        if(flag==1)
		    printf(" \nWord is found in the file\n");
        else
            printf("\nWord is not found in the file\n");
		fclose(fp);
	}
	return 0;
}

/* Program: To print head/tail of the file entered by the user
* Author: Soumya Kulshreshtha, sok1721060@sicsr.ac.in
* Date: 19 March 2019
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
    int N;
		int check;
		int line_count=0;
    char filename[20];
    printf("\nEnter your file name: ");
    scanf("%s",filename);
		printf("\nEnter no of lines (Negative input to print first 'n' lines, positive to skip first 'n' lines and print the rest of the file):");
		scanf("%d",&N);
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
			if(N<0)//for printing first 'N' lines
			{
				check=N+(N*(-2));
				if ((ch == '\n') || (ch=='\r'))
				{
					++line_count;
					if(line_count<=check)
						printf ("%c", ch);
				}
				else if((line_count<check) && (ch != EOF))
				{
					printf ("%c", ch);
				}
			}
			else if(N>0)// for printing all the lines except first 'N' lines
			{
				check=N;
				if ((ch == '\n') || (ch=='\r'))
				{
					++line_count;
					if(line_count>=N)
						printf ("%c", ch);
				}
				else if((line_count>=check) && (ch != EOF))
				{
					printf ("%c", ch);
				}
			}
		}
	fclose(fp);
	}
return 0;
}

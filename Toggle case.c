/* Program: To print the alternate lines of the file entered by user in upper and lower case.
 * Author: Soumya Kulshreshtha, soumyakulshreshtha259@gmail.com
 * Date: 19 March 2019
 */
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
	char ch;
  char filename[20];
  int flag = 1;
  printf("Enter your file name: ");
  scanf("%s",filename);
  FILE *fp = fopen(filename, "r");//File processing
  if (fp == NULL)
	{
		puts("Couldn't open file");
		exit(0);
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)// Read the file till End of file is reached
		{
      if(ch=='\n')
      {
        ++flag;
      }
      if(flag%2==0)
      {
			     printf ("%c", toupper(ch));
      }
      else
      {
        printf("%c",tolower(ch));
      }
    }
		fclose(fp);
	}
	return 0;
}

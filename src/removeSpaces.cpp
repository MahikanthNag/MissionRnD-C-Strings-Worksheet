/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>
#include<malloc.h>
char* removeSpaces(char *str)
{
    if(!str)
     {
         char* s=(char*)malloc(10);
         s="\0";
         return '\0';
     }
	int i,c=0,coun,flag=0;int len=0,l;int j;
	for(len=0;str[len]!='\0';len++);
	{

	}l=len;coun=0;
	for(i=0;coun<len;i++)
    {
        coun++;
        if(str[i]!='_')
            flag=0;
        if(str[i]==' ')
        {
            c++;

            for(j=i;j<len-1;j++)
            {
                str[j]=str[j+1];
            }///len=len-1;
            //if(flag!=0)
            i--;
            //flag=1
        }

    }
    //printf("%d is c",c);
    str[l-c]='\0';
    return str;
}
/*int main()
{
    char* str;
    str=(char*)malloc(100);
    scanf("%s",str);
    str=removeSpaces(str);
    printf("%s is the string",str);
}

*/

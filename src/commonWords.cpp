/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>
#include<string.h>
#define SIZE 31

char ** commonWords(char *str1, char *str2)
{
    if((!str1)||(!str2)||str1[0]==' '||str2[0]==' ')
        return NULL;
    //printf("method started");
    //printf("\n strings are %s   %s\n",str1,str2);
    //printf("\n str2[i]= %c  %c",str2[0],str2[7]);
	int i,c3=0,x=0,y=-1,c1=0,c2=0,j;int len1,len2,flag=0;
	char *arr1[100],*arr2[100],*res[100];
	for(i=0;i<100;i++)
    {
        arr1[i]=(char*)malloc(100);//arr1[i]="";
        arr2[i]=(char*)malloc(100);
        res[i]=(char*)malloc(100);
        //arr2[i]="";
        for(j=0;j<100;j++)
        {
            arr1[i][j]='a';arr2[i][j]='a';res[i][j]='a';
        }
    }
    for(len1=0;str1[len1]!='\0';len1++){}
	for(len2=0;str2[len2]!='\0';len2++){}
	printf("%d and %d ",len1,len2);//hai_this_is_pappa welcome_to_python
	for(i=0;i<len1;i++)
    {
        x=y+1;
        if(str1[i]==' ')
        {
            y=i;
            for(j=x;j<y;j++)
            {
                arr1[c1][j-x]=str1[j];printf("%c==%c\n",str1[j],arr1[c1][j-x]);
            }
            arr1[c1][j-x]='\0';
            printf("ind string is %s \n",arr1[c1]);
            c1++;

            printf("(x,y) is (%d,%d)",x,y);
        }
    }
    for(i=x;i<len1;i++)
    {
        arr1[c1][i-x]=str1[i];
    }
    arr1[c1][i-x]='\0';c1++;


    x=0;y=-1;
    printf("length2=%d",len2);
    for(i=0;i<len2;i++)
    {
       // printf("entered loop");
        x=y+1;//printf("%c ",str2[i]);
        if(str2[i]==' ')
        {
            y=i;
            for(j=x;j<y;j++)
            {
                arr2[c2][j-x]=str2[j];
            }
            arr2[c2][j-x]='\0';
            c2++;
            printf("c2 value is  :  :d",c2);
        }

    }
    for(i=x;i<len2;i++)
        {
            arr2[c2][i-x]=str2[i];
        }
        arr2[c2][i-x]='\0';c2++;


    //printf("\n values of c1 and c2 are %d  %d  ",c1,c2);
    for(i=0;i<c1;i++)
    {
      //  printf("%s ",arr1[i]);
    }
    //printf("\n");
    for(i=0;i<c2;i++)
    {
        //printf("%s ",arr2[i]);
    }

    for(i=0;i<c1;i++)
    {
        for(j=0;j<c2;j++)
        {
            if(strcmp(arr1[i],arr2[j])==0)
               {
                 res[c3]=arr1[i];
                 c3++;flag=1;
               }
        }
    }
    //hai_pappa_kanna bujji_pappa_sorry
    //if(flag==0)
      //  return NULL;
      //printf("%sok  %sok",arr1[1],arr2[1]);
      if(strcmp(arr1[1],arr2[1])==0)
      {
        //  printf("\n\n are equal");

      }
      //printf("value of c3 is %d",c3);
    for(i=0;i<c3;i++)
    {
        //printf(" result ::::: %s ",res[i]);
    }
    if (flag==0) return NULL;
    return res;
}
/*int main()
{
    char *s1,*s2;
    s1=(char*)malloc(100);
    s2=(char*)malloc(100);
    scanf("%s",s1);
    scanf("%s",s2);
    printf("input taken");
    commonWords(s1,s2);
    return 0;
}
*/

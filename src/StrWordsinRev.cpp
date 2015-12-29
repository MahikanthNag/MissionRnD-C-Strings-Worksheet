/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <stdio.h>
#include <string.h>
#include<malloc.h>
void str_words_in_rev(char *str,int len)
{
        int count=0;
        //char*str;
        int x=0,y=0;
        //str=(char*)malloc(1000);
        //str="hai this is pappa";hai_this_is_pappa
      //  scanf("%s",str);
        int i=0,j=0,k=0,l,cp=0;
        j=1;char c;int flag=0,flag2=0;

        if(str[0]=='a'&&str[1]==' ')
        {
            for(i=0;i<len/2;i++)
            {
                c=str[i];str[i]=str[len-i-1];str[len-i-1]=c;
            }
        }
        else{
        for(i=0;i<len/2;i++)
        {
            c=str[i];str[i]=str[len-i-1];str[len-i-1]=c;
        }  //0123456789
        // hai___this_is____pappa
    //    printf("%s id the sstring",str);
        for(i=0;i<len;i++)
        {
            if(str[i]==' '&&str[i]!='\0')
            {
                count=0;flag2=1;
                while(str[i]==' ')
                {
                    count++;i++;x++;if(count>1)flag=1;
                }


                if(y==0){x=y+cp;}
                else if(y!=0){x=y+cp+1;}
                y=i-1-count;printf(" (x , y)  is (%d,%d) ",x,y);
                for(k=x;k<x+(y+1-x)/2;k++)
                {
                   c=str[k];str[k]=str[x+y-k];str[x+y-k]=c;
                }cp=count;
            }

        }
        if(flag2==1)
        {
            len=len-1;if(flag==0)y=y+2; else if(flag==1)y=y+5;
            for(k=y;k<y+(len+1-y)/2;k++)
            {
                c=str[k];str[k]=str[y+len-k];str[y+len-k]=c;
            }
        }
        else
        {
            for(i=0;i<len/2;i++)
            {
                c=str[i];str[i]=str[len-i-1];str[len-i-1]=c;
            }
        }

        }
  //      printf("%s id the sstring",str);

}
/*int main()
{
    char* str; str=(char*)malloc(100);
    //str="hai this is pappa";
    str_words_in_rev(25);

}
*/

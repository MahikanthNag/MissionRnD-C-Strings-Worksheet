/*
OVERVIEW: Given a float number ,Convert it into a string

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<malloc.h>

void number_to_str(float number, char *str,int afterdecimal)
{
        float num;
        if(number<0)
            num=-number;
        else
            num=number;
        //str=(char*)malloc(100);
        int k=num;
        float f=num;
        int i=0,rem=0,j=0;
        char c;int y;

        if(afterdecimal!=0)
        {

            while(j<afterdecimal)
            {
                f=f*10;
                y=f;
                str[i]=(y%10)+'0';i++;j++;
            }
            k=num;
            str[i]='.';i++;
            while (k>0)
            {
                rem=k%10;k=k/10;str[i]=rem+'0';i++;
            }
          //  printf("%d is i",i);
            for(k=j;k<j+(i-j)/2;k++)
            {
                c=str[k];str[k]=str[i-k-1+2];str[i-k-1+2]=c;
            }
            j=0;f=num;
            while(j<afterdecimal)
            {
                f=f*10;
                y=f;// printf("the values of y are: %d",y);
                str[i]=(y%10)+'0';i++;j++;
            }
            for(k=0;k<afterdecimal;k++)
            {
                for(j=0;j<i-1-k;j++)
                {
                    str[j]=str[j+1];
                }
            }str[i-2]='\0';


       }
       else
       {
           k=num;
           while(k>0)
           {
               rem=k%10;str[i]=rem+'0';i++;k=k/10;
           }
           for(k=0;k<i/2;k++)
           {
               c=str[k];str[k]=str[i-k-1];str[i-k-1]=c;
           }
           str[i]='\0';
     //      printf("initial string is %s ",str);

       }

       if (number<0)
       {
           for(k=i;k>0;k--)
           {
               str[k]=str[k-1];
           }
           str[0]='-';
          // for(k=0;k<i;k++)
            //    printf("%c  ",str[k]);
       }
//printf("%c",str[0]);
   //return str;
}
/*int main()
{
    char *str;str=(char*)malloc(100);
    number_to_str(-34.345,str,2);
    //printf("%shai",str);return 0;

}*/

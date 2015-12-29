/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K)
{
	//char* s=NULL;
	int i=0;int j=0;
	if(!str||K<0)
        return '\0';
	while(str[i+K+1]!='\0')
    {
        i++;
    }
    for(j=0;str[j]!='\0';j++)
    {

    }
    if(K>j)
        return '\0';
    return str[i];
}

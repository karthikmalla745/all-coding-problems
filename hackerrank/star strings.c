#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isvowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
    {
        return 1;
    }
    return 0;
    
}

int main()
{
    int i,flag=1;
    char s[101];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]==s[i+1]) || (isvowel(s[i])&&isvowel(s[i+1])))
           {
               flag=0;
               break;
           }
    }
           if(flag)
           {
               printf("Yes");
           }
           else
           {
               printf("No");
           }

     
    return 0;
}
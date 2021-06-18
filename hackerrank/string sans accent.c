#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000005];
    scanf("%s",str);
    int i=0;
    while(str[i])
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u')
        {
            i++;
        }
        else
        {
            
            printf("%c",str[i]);
            i++;
        }
    }
    return 0;
}
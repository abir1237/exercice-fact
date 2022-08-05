#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,fact,nb;
 fact=1;
    printf("Ecrere la valeur nb :\n");
    scanf(" %d",&nb);
    if (nb<0)
    printf("imposible");
    else
    for(i=1;i<=nb ;i++){
    fact =fact*i;
    printf("la facteur est:%d",fact);

    }
        return 0;
}

/* Q54: A program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */
#include<stdio.h>
int main()
{
    int i, j, k, l;
    l = 5;
    for(i=1; i<=l; i++)
    { for(k=1; k<=l-i; k++)
    { printf(" "); }
    for(j=1; j<=(2 * i - 1); j++)
    { printf("*"); }
    printf("\n");
    }
    for(i=l-1; i>=1; i--)
    { for(k=1; k<=l-i; k++)
    { printf(" "); }
    for(j=1; j<=(2 * i - 1); j++)
    { printf("*"); }
    printf("\n");
    }
    return 0;
}


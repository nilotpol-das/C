/*PRINT THE PATTERN.
  A B C D
  A B C D
  A B C D
  A B C D    */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter line number:");
    scanf("%d",&n);

    for(int i=(64+1);i<=(64+n);i++)
    {
        for(int j=65;j<=(64+n);j++)
        {
            printf("%c ",(char)j);
        }
        printf("\n");
    }
}
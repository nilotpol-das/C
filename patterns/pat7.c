/* PRINT THE PATTERN.
   1
   A B
   1 2 3
   A B C D
   1 2 3 4 5       */

#include<stdio.h>
int main()
 {
    int n;
    printf("Enter line number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d",j);
            }
            else
            {
                printf("%c",ch);
                ch++;
            }
        }
        printf("\n");
    }   
    return 0;
 }
#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n>0)
    {
        n/=10;
        c++;
    }
    printf("NO OF DIGITS ARE %d",c);
}
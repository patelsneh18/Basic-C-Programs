#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int m;
    int rev=0;
    do
    {
        m = n%10;
        rev=rev*10 + m;
        n/=10;
    } while (n>0);
    printf("%d",rev);
}
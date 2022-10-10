#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("ENTER THE NUMBER::\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    while(sum>0)
    {
        rem=sum%10;
        sum=sum/10;
        printf("%d\n",rem);
    }
    return 0;
}

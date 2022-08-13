#include<stdio.h>
int main()
{
    int i,n,next=0,prev=0,cur=1;
    printf("Enter a number of your choice\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        next=prev+cur;
        printf("%d\n",next);
        prev=cur;
        cur=next;
    }
    return 0;
}
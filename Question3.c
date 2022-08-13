#include<stdio.h>
int main()
{
    int i,n,next=0,prev=0,cur=1;
    printf("Enter a number of your choice");
    scanf("%d",&n);
    for(i=0;1;i++)
    {
        next=prev+cur;
        printf("%d\n",next);
        prev=cur;
        cur=next;

        if(next==n)
        {
            printf("number found\n");
            break;
        }
        if(next>n)
        {
            printf("number not found\n");
            break;
        }

    }
    return 0;





}
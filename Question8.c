#include<stdio.h>
int main()
{
    int i,a,n,flag=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    for(n=a;1;n++)
    {
        flag=0;
        for(i=2;i<n/2;i++)
        {
            if(n%1==0)
            flag=1;
        }
        if(flag==0)
        {
            printf("%d",n);
            break;
        }
    }
    return 0;
}
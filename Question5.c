#include<stdio.h>
int main()
{
    int num1,num2,hcf,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf =i;
        }
    }
    if(hcf ==1)
    {
        printf("%d and %d are co-prime numbers");
    }
    else{
        printf("%d and %d are not co-prime numbers");
    }









    return 0;
}
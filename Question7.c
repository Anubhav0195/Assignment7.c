#include<stdio.h>
int main()
{
    int a,b,num,i,j;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("prime numbers between %d and %d are :",a,b);
    for(i=a+1;i<b;++i){
        num =0;
        for(j=2;j<=i/2;++j){
            if(i % j ==0){
                num =1;
                break;
            }
        }
        if(num ==0){
            printf("%d\n",i);
        }
    }










    return 0;
}
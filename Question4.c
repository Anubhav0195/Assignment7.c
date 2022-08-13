#include<stdio.h>
int main()
{
    int a,b,hcf,i;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        for(i=b;i>=1;i--){
            if(a%i==0 && b%i==0){
                hcf=i;
                break;
            }
        }
    }
    else{
        for(i=a;i>=1;i--){
            if(a%i==0 && b%i==0){
                hcf=i;
                break;
            }
        }
    }
    printf("hcf=%d",i);






    return 0;
}
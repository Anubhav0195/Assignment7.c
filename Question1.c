#include<stdio.h>
int fib(int);
int main()
{
    int nth,term;
    printf("Which term??");
    scanf("%d",&nth);
    term =fib(nth);
    printf("%dth term of fibonacci series is %d",nth,term);
    return 0;
    }
    int fib(int n)
    {
        if(n==1)
        {
            return 0;
        }
        if(n==2)
        {
            return 1;
        }
        else
        {
            return fib(n-1)+fib(n-2);
        }
    }
// Question 1 :- W.A.Function to print n position of the fibonacci sequence?
#include<stdio.h>
int fib (int n);
int main()
{
    printf("fib is %d",fib(6));
    return 0;
}
int fib (int n)
{
    if(n == 0)
{
    return 0;
}
   if(n == 1)
{
    return 1;
}
    int fibnm1=fib(n-1);
    int fibnm2=fib(n-2);
    int fibt=fibnm1+fibnm2;
    return fibt;
}
// Question 2 :- W.A.Program to print first to n term of the fibonacci sequence?
#include<stdio.h>
int main()
{   int n,a=0,b=1,c;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d\n",a);
       c=a+b;
       a=b;
       b=c;
    }
    return 0;
}

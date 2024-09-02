//W.A Function to print Hot and Cold depends on the temperature user enter ?
#include<stdio.h>
int temp(int n);
int main()
{   int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    temp(n);
    return 0;
}
int temp(int n)
{
    if( n <= 25 ){
        printf("It's very Cold.");
    }
    if( n >= 25 && n <= 50 ){
        printf("It's very Hot.");
    }
    return 0;
}
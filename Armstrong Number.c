// Write a Program to find the Number is Armstrong Number or not ?
//An Armstrong number is a number that is equal to the sum of the cubes of its own digits.
// For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include<stdio.h>
int main()
{   
    int n,c,r,Arms=0;
    printf("Enter a Number :- ");
    scanf("%d",&n);
    c=n;
    while (n!=0)    
    {
        r=n%10;
        Arms=(r*r*r)+Arms;
        n=n/10;
    }
    if (c==Arms)
    {
        printf("It is a Armstrong Number");
    }else{
        printf("Not a Armstrong Number");
    }
    return 0;   
}
// W.A.P to check a Number is Positive or Negative and Even or odd .(By Using Nested If) 
#include<stdio.h>
int main()
{
    int Number;
    printf("Enter a Number :- ");
    scanf("%d",&Number);

    if (Number>=0)
    {
        printf("Positive \n");
        if (Number % 2 == 0)
        {
            printf("even");
        }else{
            printf("odd");
        }
    }else{
        printf("nagetive \n");
         if (Number % 2 == 0)
        {
            printf("even");
        }else{
            printf("odd");
        }
    }
    return 0;
}

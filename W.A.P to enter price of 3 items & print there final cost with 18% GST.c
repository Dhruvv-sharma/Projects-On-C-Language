//W.A.P to enter price of 3 items & print there final cost with 18% GST.
#include<stdio.h>
int main()
{  
    float Price[3];
    printf("Enter three cost : ");
    scanf("%f",&Price[0]);
    scanf("%f",&Price[1]);
    scanf("%f",&Price[2]);
    
    printf("final cost of 1: %f\n",Price[0]+(0.18*Price[0]));
    printf("final cost of 2: %f\n",Price[1]+(0.18*Price[1]));
    printf("final cost of 3: %f\n",Price[2]+(0.18*Price[2]));

    return 0;
}

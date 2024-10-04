#include <stdio.h>
#include <math.h>

int main(void){

    float a,b,c;

    printf("ax2 = \n");
    scanf("%f", &a);
    printf("bx = \n");
    scanf("%f", &b);
    printf("c = \n");
    scanf("%f", &c);
    printf("\n");

    if(sqrt((b*b) -4*a*c) == 0){
        
        float x = ((-(b))/2*a);

        printf("x = %f\n", x);

        return 0;
    }
    else if(sqrt((b*b) -4*a*c) < 0){
        printf("Nema reseni");
    }
    else{
         float x1 = ((-(b) + sqrt((b*b) -4*a*c))/2*a);
        float x2 = ((-(b) - sqrt((b*b) -4*a*c))/2*a);

        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }



    return 0;
}
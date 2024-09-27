#include <stdio.h>

int main(){

    float x;
    float y = 0.07;
    float error = 0.001;
    scanf("%f\n", &x);

    if(x < 0){
        x*=-1;
    }

    float eps = (x-y);

    int eq = eps<error;

    printf("%f",x);

    char c = 72;

    if(c <= 'z' && c >= 'a'){
        printf(" Je písmeno...");
    }

    printf("c=%c\n",c);

    return 0;
}
#include <stdio.h>

int main(void){


    int time;
    scanf("%i", &time);

    int hodin = time / 3600;
    time %= 3600;

    int minut = time / 60;
    time %= 60;

    int sekund = time;

    printf("%i hodin, %i minut, %i sekund", hodin, minut, sekund);



    return 0;
}

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,5};
    int arr_len = 5;


    int indexMax = 0;
    int indexMin = 0;
    int Min = arr[0];
    int Max = arr[0];

    int soucet = 0; int pocet = 0;
    int soucet2 = 1; int pocet2 = 0;

    for(int i = 0; i<arr_len;++i){


        //Min
        if(arr[i] > Max){
            Max = arr[i];
            indexMax = i;
        }

        //Max
        if(arr[i] < Min){
            Min = arr[i];
            indexMin = i;
        }

        //Avg artim
        soucet += arr[i];

        //Avg Geo
        soucet2 *= arr[i];
  

    }

    printf("%i max, pozice %i\n", Max, indexMax + 1);
    printf("%i min, pozice %i", Min, indexMin + 1);

    if(pocet != 0){
        printf("Aritmeticky Prumer je %.2f", ((double)soucet / (double)pocet));
        printf("Geometricky Prumer je %.2f", ((double)soucet2 / (double)pocet2));
    }

    printf("Suma je %i", soucet);

    printf("Median je %i", arr_len % 2 == 0 ? arr[arr_len / 2] : arr[arr_len / 2 + 1]);


}
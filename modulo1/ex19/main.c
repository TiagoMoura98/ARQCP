#include <stdio.h>
#include "swap.h"

int main(){

    int size = 5;
    short vec1 [5] = {1,2,3,4,5};
    short vec2 [5] = {6,7,8,9,0};

    swap(vec1,vec2,size); 

    printf("value of vec1: %d\n", vec1[0]);
    printf("value of vec1: %d\n", vec1[1]);
    printf("value of vec1: %d\n", vec1[2]);
    printf("value of vec1: %d\n", vec1[3]);
    printf("value of vec1: %d\n", vec1[4]);

    printf("value of vec2: %d\n", vec2[0]);
    printf("value of vec2: %d\n", vec2[1]);
    printf("value of vec2: %d\n", vec2[2]);
    printf("value of vec2: %d\n", vec2[3]);
    printf("value of vec2: %d\n", vec2[4]);



    return 0;
}
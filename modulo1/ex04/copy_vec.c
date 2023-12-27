#include <stdio.h>
void copy_vec(int *vec1, int n, int *vec2){

    for (int i = 0; i < n; i++){
        // copies the value pointed by vec1 to the address pointed by vec2
        // which means we are copying the values from one array to the other
        *(vec2+i) = *(vec1+i);
    }
}
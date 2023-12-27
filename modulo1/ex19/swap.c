#include "swap.h"

void swap(short* vec1, short* vec2, int size){

// creating a new array with the same size as the other 2
short temp [size];

for (int i = 0; i < size; i++){
    // storing in temp the values of array vec1
    *(temp+i) = *(vec1+i);
    // Copying from vec2 to vec1
    *(vec1+i) = *(vec2+i);
    // copying the original content of vec1 to vec2
    *(vec2+i) = *(temp+i);
}

}
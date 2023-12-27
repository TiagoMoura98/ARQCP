#include "array_sort.h"

void array_sort(int *vec,int n){

    int temp = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}
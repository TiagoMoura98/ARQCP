#include <stdio.h>
#include "copy_vec.h"

int main(){
    // arrays creation
    int vec1 [] = {1,2,3,4,5};
    int vec2 [] = {5,6,7,8,9};
    // defining pointers for the arrays
    int *ptr_vec1 = &vec1;
    int *ptr_vec2 = &vec2;
    int n = 4;
    copy_vec((int *)ptr_vec1, n,(int *)ptr_vec2);

    return 0;
}
#include <stdio.h>
#include "size_string.h"

int main() {
    char x[] = "I will master ARQCP";
    // the array was initilizated without a fixed size so it´s defined by the ocupation of chars in this case is 20
    printf("Size =%lu\n", sizeof(x));
    //gives the size in bytes of the array address
    printf("Size =%u\n", size_string_wrong (x));
    // real size without conting the 0 that ends the string, only counts chars and spaces 
    printf("Size =%u\n", size_string_correct(x));

    char y[25] = "I will master ARQCP";
    // the size of the array is 25 here because it was initilizated with a size [25]
    printf("\n Size =%lu\n", sizeof(y));
    printf("Size =%u\n", size_string_wrong (y));
    printf("Size =%u\n", size_string_correct(y)); 
    return 0;
}
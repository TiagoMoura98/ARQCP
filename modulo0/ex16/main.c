#include <stdio.h>
#include "func_sum.h"
#include "get_ascii_code.h"
#include "fake_hash.h"

int main(){

    char str [] = {"Test array for this exercise"};
    printf("The integer sum of all the chars in the string is %u\n", fake_hash(str));

    return 0;
}


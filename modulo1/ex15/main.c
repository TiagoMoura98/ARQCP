#include <stdio.h>
#include "trim_string.h" 

int main(){

    char str [] =" String      test example  .";

    printf("The string before any trimming:%s\n\n", str);

    trim_string(str);

    printf("The new string is:%s\n\n", str);

    return 0;
}
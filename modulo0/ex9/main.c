#include <stdio.h>
#include "average.h"

int main(){

    int v [] = {1,2,3,4,5,1,2,3,4,5};
    int n = 10;
    
    int average_temp;
    average_temp = average(v,n);

    printf("The average of the array is %d\n", average_temp);    

    return 0;
}
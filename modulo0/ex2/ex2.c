#include <stdio.h>

int func_sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main(void){
    int a = 1, b = 2; 

    //declarar function
    int func_sum(int a,int b);
    //inicializar function e fazer print do valor
    printf("The sum of the 2 int values is %d\n", func_sum(a,b));

    return 0;
}


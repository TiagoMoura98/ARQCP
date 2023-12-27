#import <stdio.h>

int func_sum(int a, int b){
    //atribuir o novo valor
    int sum = a+b;
    return sum;
}

int sum_digits(int n){
    // separar os algarismos
    int second_digit = n % 10;
    int first_digit = n / 10;
    //declarar function
    int func_sum(int a, int b);
    // inicializar function
    int digit_sum = func_sum(second_digit,first_digit);

    return digit_sum;
}

int main(void){

    int n = 99;
    //declarar function 
    int sum_digits(int n);
    //inicializar function e fazer print do valor
    printf("The sum of the 2 digits is : %d\n", sum_digits(n));

    return 0;
}
#import <stdio.h>

int cmp(int a, int b){

    // we could use an switch case for this comparison but since there are only 3 options we will use if's
    if(a < b){
        return -1;
    }else{
        if(a > b){
            return 1;
        }else{
            return 0;
        }
    }
}

int get_greater_digit(int n){
    //declare functions
    int cmp(int a, int b);

    // separar os algarismos
    int second_digit = n % 10;
    int first_digit = n / 10;

    //initialize the function and store return
    int result = cmp(first_digit,second_digit);

    //logic for the outcome of function cmp
    switch (result){
        case -1:
        return second_digit;
        case 1:
        return first_digit;
        case 0:
        return -1;
    }   

    return 0;
}



int main(void){

    int n = 94;
    //declare function
    int get_greater_digit(int n);
    //if the return is -1 it means the digits are equal
    if(get_greater_digit(n) < 0){
        printf("The inserted mumber has 2 equal digits. \n");
    }else{ //otherwise we can find a greater digit in the number
        printf("The greater digit is: %d\n", get_greater_digit(n));
    }

    return 0;
}
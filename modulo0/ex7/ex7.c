#include <stdio.h>

int get_ascii_code(char c){
    //pointer creation for the char inputed
    char *ptr = &c;
    //returning the [pointer]
    return *ptr;
}


int main(void){

    char c = 'a';
    //declare function
    int get_ascii_code(char c);
    //initialize function and print result
    printf("%d\n", get_ascii_code(c));    

    return 0;
}
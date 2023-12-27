#import <stdio.h>

char get_ascii_char(int c){
    //casting char type to convert the int value of ASCI into char
    char a = (char)c;
    return a;
}


int main(void){

    int c = 97;
    //declaration of the function
    char get_ascii_char(int c);
    //initialize and print of the function
    printf("The char that is represented by that integer number is: %c\n",get_ascii_char(c));

    return 0;
}
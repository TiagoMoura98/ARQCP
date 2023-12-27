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

int main(void){

    int a = 9, b= 9;
    // declare function
    int cmp(int a, int b);
    //initialize and print result
    printf("The result is: %d\n", cmp(a,b));

    return 0;
}
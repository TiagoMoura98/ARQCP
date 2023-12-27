#include "get_ascii_code.h"
#include "func_sum.h"

int fake_hash(char str[]){
int sum = 0;
    //receives inputed string for calculation
    for(int i = 0; i < sizeof(str); i++){
        // gets the ascii code for the char and adds to the total
        sum = func_sum(sum,get_ascii_code(str[i]));
    }

    return sum;
}
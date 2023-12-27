#import <stdio.h>

int func_sum(int a, int b){
    //atribuir o novo valor
    int sum = a+b;
    return sum;
}

int mul(int a, int b){
    int total = 0;
    //declarar func_sum
    int func_sum(int a,int b);
    //iterar somas ate ter valor da multiplicacao
    for(int i = 0; i < b; i++){
        //iterar
        total = func_sum(a,total);
    }
    return total;
}

int main(void){

    int a = 8, b = 8;
    //decarar function mul
    int mul(int a,int b);
    printf("The multiplication of the 2 int values is %d\n", mul(a,b));

    return 0;
}
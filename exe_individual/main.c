#include <stdio.h>
#include "calcular.h"

int main(){

    unsigned long data = 0x99E2248499E22484;
    unsigned char checksum = get_checksum(data);

    int return_value = validar(data, checksum);

    if(return_value == 0){
        printf("Sucesso os dados transmitidos são iguais aos recebidos!");

    }else{
        printf("Os dados transmitidos não foram os mesmos que os enviados");

    }


    return 0;
}
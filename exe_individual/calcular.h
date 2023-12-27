#ifndef CALCULAR_H
#define CALCULAR_H

unsigned char get_checksum(unsigned long data);
int validar(unsigned long data, unsigned char checksum);


#endif
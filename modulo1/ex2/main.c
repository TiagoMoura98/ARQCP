#include <stdio.h>

int main(){

//declaration and initialization of variables
double x = 22;
int y = 1;
char z = "a";
// declaration and initialization of pointers
double *ptr_x = &x;
int *ptr_y = &y;
char *ptr_z = &z;

printf("Variable x : \n");
printf("Address: %p\n", &x);
//value not correct -- TODO
printf("Value : %d\n", x );
printf("Memory Size : %d\n", sizeof(x));

printf("Variable y : \n");
printf("Address: %p\n", &y);
printf("Value : %d\n", y );
printf("Memory Size : %d\n", sizeof(y));

printf("Variable z : \n");
printf("Address: %p\n", &z);
// outputs code ASCII that´s not what we want -- TODO
printf("Value : %d\n", z );
printf("Memory Size : %d\n", sizeof(z));
//pointers output
printf("Variable ptr_x : \n");
printf("Address: %p\n", &ptr_x);
printf("Value : %p\n", ptr_x );
printf("Memory Size : %d\n", sizeof(ptr_x));

printf("Variable ptr_y : \n");
printf("Address: %p\n", &ptr_y);
printf("Value : %p\n", ptr_y);
printf("Memory Size : %d\n", sizeof(ptr_y));

printf("Variable ptr_z : \n");
printf("Address: %p\n", &ptr_z);
printf("Value : %p\n", ptr_z );
printf("Memory Size : %d\n", sizeof(ptr_z));


    return 0;
}
#include <stdio.h>
#include "hexa_address.h"

int main(){

    // declarations requested in the exercise
    int x = 5;
    int* ptr_x = &x;
    float y = *ptr_x + 3;

    //values of vars
    printf("The value of x is %d\n", x);
    printf("The value of y is %f\n", y);

    //addresses of vars
    printf("The address of x is ");
    hexa_address((void *)&x);
    printf("The address of y is ");
    hexa_address((void *)&y);
    printf("The address of *ptr_x is ");
    hexa_address((void *)&ptr_x);

    //this indicates the value stored in the address pointed by the ptr_x
    printf("The value pointed by *ptr_x is %d\n", *ptr_x);
    //this indicates the address pointed by ptr_x
    printf("The value of *ptr_x is %p\n", ptr_x);

    // declarations requested in the exercise
    int vec[] = {10, 20, 30, 40};
    int* ptr_vec = vec;
    int z = *ptr_vec;
    int h = *(ptr_vec + 3);

    //values of vars
    printf("The value of z is %d\n", z);
    printf("The value of h is %f\n", h);

    //addresses of vars
    printf("The address of vec is ");
    hexa_address((void *)&vec);
    printf("The address of *ptr_vec is ");
    hexa_address((void *)&ptr_vec);
    
    // values on those vars
    printf("The value of vec is %d\n", vec); //valor errado
    printf("The value of ptr_vec is %f\n", ptr_vec);

    // ptr_vec is a pointer that stores the address of the var which is "pointing to"

    // declarations requested in the exercise
    int i;
    // in this cycle we will print the pairs of address/value in the array vec
    for(i = 0; i < 4; i++){
        printf("1: %p,%d\t", &vec[i],vec[i]);
        }
    printf("\n");

    /* in this cycle we will print the pair address/ value pointed by that "pointer"
    we are basically showing the same information as in the cycle above, but without directly accessing it */
    for(ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
        printf("2: %p,%d\t", ptr_vec,*ptr_vec);
        }
    printf("\n");

    /* in this cycle we will print the same exact information as in the previous one (accessing it trough reference) but in this 
    cycle the information is inverted, so the array values will be displayed but inverted */
    for(ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--){
        printf("3: %p,%d\t", ptr_vec,*ptr_vec);
    }

    /* ptr_vec++ makes the pointer go to the next address with a new value of the array, in this case since we are using an 
    array of ints, "++"" increases 4 bytes , ptr_vec-- does exactly the same but instead of increasing, decreases it */


    // declarations requested in the exercise

    printf("\n");
    // pointer stores the address of the first position in the array
    ptr_vec = vec;
    // prints the address of vec[0] and the value in it
    printf("4: %p,%d\n", ptr_vec,*ptr_vec);
        printf("\n");

    /* stores in a int variable the value which is pointing to (vec[0])*/
    int a = *ptr_vec++;
    //prints the address and value of vec[1], because the pointer was incremented and the value of a
    printf("5: %p,%d,%d\n", ptr_vec,*ptr_vec, a);
        printf("\n");

    ptr_vec = vec; //goes back to vec[0]
    // stores in a int variable the value in vec[0] +1, value pointed by ptr_vec (+1)  
    a = (*ptr_vec)++;
    // prints address/value of vec [0] +1
    printf("6: %p,%d,%d\n", ptr_vec,*ptr_vec, a);
        printf("\n");

    ptr_vec = vec; // goes back to vec[0]
    a = *++ptr_vec; // store the value of vec[1]
    //prints the address/ value of vec[1] and a
    printf("7: %p,%d,%d\n", ptr_vec,*ptr_vec, a);
        printf("\n");

    ptr_vec = vec; //goes back to vec[0]
    // I already understood that the value on the array itself as incremented but i´m not understanding the logic
    // REVIEW THIS LATER
    a = ++*ptr_vec;
    // prints the address/value of vec [0] and a
    printf("8: %p,%d,%d\n", ptr_vec,*ptr_vec, a);
    printf("\n");
    /* in this cycle we will print the whole address/ value of the array vec[] */
    for(ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
        printf("9: %p,%d\t", ptr_vec,*ptr_vec);
    }

    printf("\n");
    unsigned int d = 0xAABBCCDD;
    // this will print the address of d and the value stored in that var
    printf("10: %p,%x\t", &d,d);
    
    printf("\n");
    
    // stores the address of d in the pointer ptr_d
    unsigned char* ptr_d = (unsigned char*)&d;
    // creates a new var
    unsigned char* p;
    // p is equal to the address stored in the pointer ptr_d which is the address of d
    // which means that in the first half of the output we will print the addresses of "d" with "p"
    // in the second half we are casting the type unsigned char to the pointed value of p
    // which is the value stored in ptr_d ... the address of d
    for(p = ptr_d; p < ptr_d + sizeof(unsigned int); p++){
        printf("11: %p,%x\t", p,(unsigned char)*p);
    }

    return 0;
}
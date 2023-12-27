#include <ctype.h>
#include "trim_string.h"


void trim_string(char *str){


int p = 0;
int length = 0;
int m, o;

for(int i = 0; *(str+i)!='\0';i++){
        p++;
        if(isspace(*(str+i)) && isspace(*(str+p))){
            m = i + 1;
            for(int j = i; *(str+j)!='\0'; j++){
            
                *(str+j) = *(str+m);
                m++;

            }
            i = -1;
            p = 0;
        }
    length ++;    
}   

if(isspace(*str)){
o = 0;
    for(int n = 0; *(str+n)!='\0'; n++){
                // deleting the first space and adjusting the string
                o++;
                *(str+n) = *(str+o);
            }
}

if(isspace(*(str+i))){
    *(str+i) = *(str+p);
}










/*
    if(isspace(*(str))){
            //deletes the first space if it exists
            for(int j = 0; *(str+j)!='\0'; j++){
                    *(str+j) = *(str+j+1);
                    
                }
    }            
    int p = 1;
    for(int i = 0; *(str+i)!='\0'; i++){
    
        p++;
        
        if(isspace(*(str+i)) && isspace(*(str+p))){
            //if there is more than one space together deletes it and realocates the whole "array" values
            for(int j = 0; *(str+j)!='\0'; j++){
                    *(str+j) = *(str+p);
                    
             }
        }
                //deletes the spaces before the ending of the string if there is any
        if(isspace(*(str+i)) && *(str+p)=='\0'){
                    *(str+i) = *(str+p);
        }
    }
*/


}
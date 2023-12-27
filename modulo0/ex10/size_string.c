unsigned int size_string_wrong (char s[]) {

    return sizeof(s); //gives the size in bytes of the array address
}

unsigned int size_string_correct (char s[]) {

    unsigned int cont=0;
    //Goes trough the array until it finds a number 0 indicating the end of the string
    while(s[cont]!=0)
    cont++;
    
    return cont;
}
.section .text
    .global validar
    validar:

    #%rdi = data %rsi =checksum
    movq %rdi, %r10     #r10 now holds the data value

    call get_checksum
    movq %rax, %rdx     #rdx now hold the return of the get_checksum function

    #aqui seria suposto criar uma nova funcao que apenas somasse os bytes todos mas não fizesse o complemento, ou seja,
    #podiamos aproveitar a lógica que usamos na function get_checksum
    #como no meu caso nao estou a fazer o complemento irei apenas utilizar novamente a function get_checksum para obter a soma 
    #de todos os bytes

    call get_checksum
    movq %rax, %rcx 

    addq %rdx, %rcx
    cmpq $0, %rccx      #compara o valor da soma de ambos os bytes a 0
    je return_0
    jmp return_1

    return_0:
    movq $0, %rax
    jmp end

    return_1:
    movq $1, %rax
    jmp end

    edn:
    ret

.section .text
    .global get_checksum
    checksum:
    #long data in %rdi
    movq $8, %r12   #counter
    movq $1, %r13   #iterator

    movq %rdi, %rax
    movl %al, %dx     #dx now stores 1byte
  

    loop:
    SHR $8, %rax
    addl %al, %dx
    cmpq %r13, %r12
    je end
    jl loop

    #depois de somar todos os bytes contidos na varivael data deviamos fazer o complemento para 1
    #mas eu não sei fazer por isso vou deixar o resultado em rax como se ja tivesse pronto    

    end:
    movw %dx, %ax    #%ax is suposed to now store the final checksum

    ret

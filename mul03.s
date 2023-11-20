.global main
.func main

main:
    mov r1 , #0
    mov r2 , #5 @loop repeat
    loop:
    add r1 , #8
    subs r2 , #1
    cmp r2 , #0
    beq exit
    b loop
    exit:
    mov r0 ,r1
    bx lr

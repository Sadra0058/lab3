.global main
.func main

main:
    mov r0, #5
    mov r1, #3
    lsl r0, r0 , r1
    bx lr

.global main
.func main

main:
    ldr r1, =val0
    ldr r1, [r1]
    ldr r2, =val1
    ldr r2, [r2]
    cmp r1 , r2
    bgt not_greater
    b greater
    greater:
        mov r0, #2
        bx lr
    not_greater:
        mov r0 , #1
        bx lr

val0 : .word 3
val1 : .word 5
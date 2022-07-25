Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.

II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3



/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- to know the t0ps0 bits in tocon reg if the reg is f3.
step4:- print the output
*/ 




include <stdio.h>

int main() {
    int T0CON;
    T0CON=0xF3;
    T0CON=T0CON|(1<<4);
    T0CON=T0CON|(1<<8);
    printf("T0PS0 is %d\n",(T0CON>>1)&1);
    printf("T0PS1 is %d\n",(T0CON>>2)&1);
    printf("T0PS2 is %d\n",(T0CON>>3)&1);
    return 0;
}
 I). Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”


/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- checking the 3  bits are set to x06 we are setting the cmcon bits to 1.
step4:- print the output
*/ 



#include <stdio.h>
int main() {
    int ADCON0=0x06,CMCON;
    ADCON0=ADCON0|(1<<4);
    ADCON0=ADCON0|(1<<7);
    ADCON0=ADCON0|(1<<8);
    printf("CIS is %d\n",(ADCON0>>4)&1);
    printf("C1OUT is %d\n",(ADCON0>>7)&1);
    printf("C2OUT is %d\n",(ADCON0>>8)&1);
    return 0;
}


 I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.

II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55

/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- exectraing the bits aas per the client requirement and using num>>pos&1 to print in binary at last.
step4:- print the output
*/ 


#include <stdio.h>

int main() {
    // Write C code here
    int SSPSTAT=0x55;
    SSPSTAT=SSPSTAT&(~(1<<4));
    SSPSTAT=SSPSTAT&(~(1<<5));
    SSPSTAT=SSPSTAT&(~(1<<7));
    printf("UA is %d",(SSPSTAT>>1)&1);
     printf("BF is %d",(SSPSTAT>>2)&1);
      printf("SMP is %d",(SSPSTAT>>8)&1);
    return 0;
}
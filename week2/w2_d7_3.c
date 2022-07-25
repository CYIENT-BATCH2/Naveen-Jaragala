3.Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”




/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- clear the bits if the bits is equal to 7 in reserved chs 3 2 1 0.
step4:- print the output
*/ 



#include <stdio.h>

int main() {
   
     char ADCON0,CMCON;
     ADCON0=ADCON0|(1<<3);ADCON0=ADCON0|(1<<4);
     ADCON0=ADCON0|(1<<5);ADCON0=ADCON0|(1<<6);
     CMCON=(CMCON>>1)&(~1); CMCON=(CMCON>>2)&(~1);
      CMCON=(CMCON>>3)&(~1); CMCON=(CMCON>>4)&(~1);
    for(int i=1;i<=4;i++)
    {
        printf("%d",(CMCON>>i)&1);
    }
    return 0;
}

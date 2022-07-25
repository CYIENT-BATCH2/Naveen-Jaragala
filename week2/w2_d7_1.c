1. Write a program to convert a data stream from Little Endian to Big Endian (you can take any 8 bit value or use 0b110101110)?


/*algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- checking the given number is stored in littel or big endian 
*/






#include <stdio.h>

int main() {
   char num;
   printf("enter a number:\n");
   scanf("%d",&num);
   char *ptr=&num;
   if(*ptr==num)
   printf("littel endian\n");
   printf("its not possible to convert");
    return 0;
}


 Write a code to swap even bits with odd bits in unsigned long variable(uint64).


Example: bit 0 with bit 1; bit 2 with bit 3; bit 4 with bit


/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- swapping is done and printing in the binary bu using the num>>pos&1
step4:- print the output
*/ 










#include <stdio.h>

int main() {
  long int num;
  printf("enter a number:");
  scanf("%ld",&num);
  printf("binary equivalent is\n");
  for(int i=63;i>=0;i--)
  {
      printf("%d",(num>>i)&1);
  }
  for(int i=63;i>=0;i=i-2)
  {
      if(((num>>i)&1)!=((num>>(i-1))&1))
      {
          num=num^(1<<i);
          num=num^(1<<(i-1));
      }
  }
  printf("\n");
  printf("after swapping:\n");
   for(int i=63;i>=0;i--)
  {
      printf("%d",(num>>i)&1);
  }
    return 0;
}
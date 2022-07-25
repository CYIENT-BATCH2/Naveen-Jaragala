Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value.





/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- as per the bit position we are compliment the bit in that position.
step4:- print the output
*/ 


include <stdio.h>
void fun(int a,int b);
  int num=0x12345678;
    char *ptr=&num;
int main() {
    int bit,byte;
    printf("enter byte number:");
    scanf("%d",&byte);
    printf("enter bit position:");
    scanf("%d",&bit);
    fun(byte,bit);
    return 0;
}
void fun(int a,int b)
{
    int x;
    x=(*(ptr+a))&(~(1<<b));
    printf("%d",(x>>b)&1);
}
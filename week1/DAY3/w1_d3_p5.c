
//Right shift the value 0xFE by 3 bits and print the value

algoritham:
step1:-declaration of the variables as per the user requirement and header file inclusion
step2:-scanf the numbers which we waqnt to convert and how many positions you want to right shift.
step3:-right shift the numbers as per user input
step4:-print the output
*/





#include<stdio.h>
int main()
{
int n,c,m;
printf("enter the number which you waat to shift:-");
scanf("%x",&n);
//c=n;printf("%d\n",c);
m=n>>3;
printf("%d %x",m,m);
}
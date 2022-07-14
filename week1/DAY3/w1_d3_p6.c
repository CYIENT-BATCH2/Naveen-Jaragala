//Write program to accept hex value as i/p and right shift bit value also as i/p and print the value after doing the hex right shift

/*/*algoritham:
step1:-declaration of the variables as per the user requirement and header file inclusion
step2:-scanf the numbers which we waqnt to convert and how many positions you want to right shift.
step3:-right shift the numbers as per user input
step4:-print the converted numbers as output
*/




#include<stdio.h>
int main()
{
int n,c,m,n2;
printf("enter the number in hexadecimal and enter how many positions you need to shift:- ");
scanf("%x %d",&n,&n2);
m=n>>n2;
printf("%d %x",m,m);
}
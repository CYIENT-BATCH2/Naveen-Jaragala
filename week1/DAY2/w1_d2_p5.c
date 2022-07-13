//Day2 program 5
//A message is encoded in the form of numbers and sent to you. Write a program to decode the message. (HINT: A=1, B=2, … so on) 

/*algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the number from the user
step3:-check the number is the range of 1 to 26.
step4:-add the number 64 to the user input to convert into ascii value.
step5:-printing the output character of the number.
*/


#include <stdio.h>
int main()
{
int n;
char c;
scanf ("%d",&n);
if(n<=26&&n>0)
{
c=n+64;
printf("%c",c);
}}

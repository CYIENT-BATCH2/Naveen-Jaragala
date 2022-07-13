//Day1 program 7
//Find whether a given 10-digit number is palindrome or not.  (HINT: Any number is said to be a palindrome if the original number and the reverse of the original number are the same.)
/*
algoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the 10 numbers from the user
step3:-store the 10 digit number in the variable
step4:-check the number divide by 10 and store the remainder in the sum
step5:-if sum is equals to the variable 
step6:-print the number is palindrome if not equals to variable the print not a palindrome
*/

#include<stdio.h>
int main()
{
long int n,r=0,s=0,p=0;
scanf("%d",&n);
if(n>=1000000000&&n<=9999999999){
p=n;
l:
if(n){r=n%10;s=s*10+r;n=n/10;goto l;}
if(p==s){printf("palindrome");}else{printf("not a palindrome");}
}
else{printf("not in a range");}
}
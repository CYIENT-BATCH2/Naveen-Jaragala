
//Convert decimal number 204 to hex value, binary value and print the same



/*
algoritham:
step1:-declaration of the variables as per the user requirement and header file inclusion
step2:-scanf the numbers which we waqnt to convert .
step3:-convert the numbers as per user required like binary 
step4:-print the converted numbers as output
*/











#include<stdio.h>
int main()
{
int n,pos=8;
printf("enter the number which we want to convert:-")
scanf("%d",&n);
printf("%x ",n);
l:
if(pos>=0)
{
    printf("%d",n>>pos&1);
    pos--;
    goto l;
     }
}

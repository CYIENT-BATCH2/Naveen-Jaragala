//Write program to check given i/p by user is alphabet or not alphabet using conditional operator

/*algoritham:
step1:-declaration of the variables as per the user requirement and header file inclusion
step2:-scanf the character which we waqnt to check 
step3:-check the character is alphabet or not using conditional operator
step4:-print its an alphabet or not as output
*/





#include<stdio.h>
int main()
{
char c;
printf("enter any which you want to know whether its an alphabet or not:- ");
scanf("%c",&c);
(c>=65&&c<=90)?(printf("its an alphabet")):((c>=97&&c<=122)?(printf("its an alphabet")):(printf("not an alphabet")));
}

/*char c;
printf("enter any which you want to know whether its an alphabet or not:- ");
scanf("%c",&c);
if((c>=65&&c<=90)||(c>=97&&c<=122))
{ printf("its an alphabet %c",c);}
else {printf("not an alphabet");}
}*/
//Day1 program 2
//Consider a character input from a user and print if it is a vowel or consonant. 
/*agoritham:-
step1:-initilization of variables as per the requirement of client.
step2:-scan the character from the user
step3:-check that is alphabet or not 
step4:-check the character is equal to AEIOU or not
step5:-if yes print the character is vowel
step6:-if no print the character is consonent
*/

#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
{
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
{ printf("vowel");}
else{ printf("consonent");}
}
else {printf("its not an alphabet");}
}


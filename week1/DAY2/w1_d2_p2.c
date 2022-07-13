//Day2 program 2
//A message ID is required to send data via CAN communication between ECU’s. Accept a random 2-digit message ID from the user to send data. Keep in mind that the given ECU only accepts binary form of the message ID. Write a program to convert the 2-digit ID to binary form.  

/*

algoritham:-
step1:-initilization of variables as per the requirement of client
step2:-scanning the two digit number from the user which we want to convert into binary
step3:-using the logic digit rightshifted with position and with one(d>>pos&1)
step5:-rotate the loop for until how many bits we want 8 or 16 or 32.
step4:-printing the two digit num in the binary form.
*/

#include<stdio.h>
int main()
{
int d,n,b,s,pos=8;
printf("enter ID\n");
scanf("%d",&d);
l:
if(pos>=0)
{
    printf("%d",d>>pos&1);
    pos--;
    goto l;
     }
    }
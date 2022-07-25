9. Assume that we have a car with 8 seats, and we are monitoring 8 seat belt status in a variable “G_Msg_switchstatus_Byte[]” as shown in pic1. Each switch status is combination of 2 bits as shown in pic2.

Write status of switches into variable “G_Msg_switchstatus_Byte[]” as below.


SWITCH1, SWITCH7 status is “faulty type 1 in switch”, SWITCH2, SWITCH5 status is ”switch unbuckle”, SWITCH3, SWITCH6 status is “switch buckle”, SWITCH4, SWITCH0 status is “faulty type 2 in switch” without disturbing the other bits.



/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- checking the seats status and printing the status.
step4:- print the output
*/ 




#include <stdio.h>
void fun(unsigned char G_Msg_switchstatus_Byte[],int n);
int main() {
    unsigned char G_Msg_switchstatus_Byte[3]={0};
    G_Msg_switchstatus_Byte[0]=12;
    G_Msg_switchstatus_Byte[1]=158;
    G_Msg_switchstatus_Byte[2]=128;
    fun(G_Msg_switchstatus_Byte,3);
    return 0;
}
void fun(unsigned char G_Msg_switchstatus_Byte[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",G_Msg_switchstatus_Byte[i]);
    }
}
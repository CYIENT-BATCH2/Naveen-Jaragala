11. Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below.

signed int G_Str_SteeringAngle_sint = -60;


unsigned char G_Msg_SteeringInformation_Byte[3u];"




/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- collecting the information and storeing the values in array through function.
step4:- print the output
*/ 


#include <stdio.h>
void fun(unsigned char G_Msg_SteeringInformation_Byte[],int n);
int main() {
    unsigned char G_Msg_SteeringInformation_Byte[3];
    G_Msg_SteeringInformation_Byte[0]=3;
    G_Msg_SteeringInformation_Byte[1]=241;
    G_Msg_SteeringInformation_Byte[2]=0;
    fun(G_Msg_SteeringInformation_Byte,3);
    return 0;
}
void fun(unsigned char G_Msg_SteeringInformation_Byte[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%u ",G_Msg_SteeringInformation_Byte[i]);
    }
}
10. Write a function to store "G_Eng_EngineTemperature_uchar" and "G_Eng_EngineRpm_uint" into " G_Msg_EngineInformation_Byte[5u]" as shown below.

unsigned char G_Eng_EngineTemperature_uchar = 50u ;


unsigned int G_Eng_EngineRpm_uint = 1000u;


unsigned char G_Msg_EngineInformation_Byte[5u];



Image label




/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- we are collecting temp and rpm of and storing into engine info.
step4:- print the output
*/ 


#include <stdio.h>
void fun(unsigned char arr[],int n);
int main() {
  unsigned char arr[5]={0};
  arr[0]=1;
  arr[1]=244;
  arr[2]=0;
  arr[3]=50;
  fun(arr,5);
    return 0;
}
void fun(unsigned char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%u ",arr[i]);
    }
}

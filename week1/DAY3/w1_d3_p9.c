/*Write program to achieve below conditions



Convert 0xFF to binary value

Convert binary value 00010001 to hex value

Convert 0xAA to decimal and to binary

Concert 01010101 to decimal and to hex*/

/*algoritham:
step1:-declaration of the variables as per the user requirement and header file inclusion
step2:-scanf the numbers which we waqnt to convert 
step3:-convert them as required like hexa binary decimal using conditions
step4:-print the converted numbers as output
*/




#include<stdio.h>
int main()
{
int n,c,m,pos=8,k,h=0,r=0,i=1,h1=0,pos1=8,h2=0,h3=0;
printf("enter the hexa num which you want to convert to binary\n");
scanf("%x",&n);
l:
if(pos>=0)
{
    printf("%d",n>>pos&1);
    pos--;
    goto l;
}
printf("\nenter the binary value which you want to convert the binary to hexa\n");
scanf("%d",&k);
while(k!=0)
{
r=k%10;
h=h+r*i;
i=i*2;
k=k/10;
}
printf("bin to hexa=%x\n",h);

printf("enter the hexa num which you want to convert into decimal and binary\n");
scanf("%x",&h1);
printf("%d\n",h1);
l1:
if(pos1>=0)
{
    printf("%d",h1>>pos1&1);
    pos1--;
    goto l1;
}
printf("\nenter the binary value which you want to convert hexa and to decimal\n");
scanf("%d",&h2);
i=1;r=0;
while(h2!=0)
{
r=h2%10;
h3=h3+r*i;
i=i*2;
h2=h2/10;
}
printf("bin to hexa=%x\n bin to decimal=%d\n",h3,h3);
}

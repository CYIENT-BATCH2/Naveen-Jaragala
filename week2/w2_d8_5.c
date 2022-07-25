
Write a program in C to sort an array using Pointer. The sample output must be as below





/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- sorting the elements in the array as ascending order.
step4:- print the output
*/ 


#include <stdio.h>
int main() {
    int a[5]={25,45,89,15,82},temp;
    for(int i=0;i<4;i++)
    {
       for(int j=i+1;j<=4;j++)
       {
           if(*(a+i)>*(a+j))
           {
           temp=*(a+i);
           *(a+i)=*(a+j);
           *(a+j)=temp;
           }
       }
    }
    printf("after sorting:\n");
    for(int i=0;i<=4;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}
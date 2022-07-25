


12. Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)

How Selection sort works is explained below.



Image label


/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- checking the element and setting it in the original position  and calling the function itself to sort each and every element.
step4:- print the output
*/ 


#include <stdio.h>
void selectionsort(int arr[],int);
static int i=0;
int main() {
        int arr[5]={20,12,10,15,2},size;
         size=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,size);
    for(int ind=0;ind<size;ind++)
    {
        printf("%d ",arr[ind]);
    }
    return 0;
}
void selectionsort(int arr[],int n)
{
    int temp;
    if(i==4)
    return;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j]) {temp=arr[i];arr[i]=arr[j];arr[j]=temp;}
    }
    i++;
    if(i<5) selectionsort(arr,n);
}
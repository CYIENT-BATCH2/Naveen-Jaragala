14. Find common elements in three sorted arrays, 3 array values are given as input to program.



/* algoritham:-
step1:- include the header files
step2:- Take the input from the user
step3:- checking the elements in the arrays and comparing each and every element if they are common.
step4:- print the output
*/ 


#include <stdio.h>
int main() {
    // Write C code here
    int a[5]={11,22,33,44,55},b[5]={11,13,14,15,55},c[5]={11,12,34,55,78};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<5;k++)
            {
                if((a[i]==b[j])||(a[i]==c[k]))
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}
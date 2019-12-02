#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<mean_var.h> // including the user header file

void main(){
int n=100,i;  //Declaration of variables to to get the no of elements
float* pntr;
float* re_pntr;
// Memory allocation of the array of 100 float elements using Malloc
pntr=(float*)malloc(n*sizeof(float));
re_pntr=(float*)malloc(2*sizeof(float));
// When there is insufficient memory
 if(pntr==NULL)
 {
   printf("Memory is not allocated ");
   exit(0); //exit() funtion with 0 as argument terminates the execution of whole program 
 }
 else
 {
 for(i=0;i<n;i++)
   pntr[i]=pow(i+1,2);  // Assignning the value into the array
 }
re_pntr[0]=*mean_var(pntr,n);    // funtion calling
re_pntr[1]=*(1+mean_var(pntr,n));
printf("Mean of the elements of the given array is %f \n",re_pntr[0]);
printf("Variance of the elements of the given array is %f \n",re_pntr[1]);
// Doing memory allocation free
free(pntr);
}



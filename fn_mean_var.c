#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<mean_var.h> // including the user header file

// definition of the dealared funtion
float* mean_var(float* ptr,int n)  // 'ptr' and'n' are the local variables
{
float* re_ptr;
float sum_lin=0,sum_sqr=0;
int i;
re_ptr=(float*)malloc(2*sizeof(float));
for(i=0;i<n;i++)
 { sum_lin=sum_lin+ptr[i];
  sum_sqr=sum_sqr+pow(ptr[i],2);
  }
re_ptr[0]=sum_lin/n;
re_ptr[1]=sum_sqr/n-pow(sum_lin/n,2); //Formulaue for variance
return (re_ptr);
}


#include <stddef.h>
#include <stdio.h>

void wrap_gradient8(int *output,float *input,ptrdiff_t dims[2],int test[2]){
   
   printf("%d\n",dims[0]);
   *output = dims[0];
   printf("%d",*output);

}

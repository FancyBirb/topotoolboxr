#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

void wrap_gradient8(int *output,float *input,ptrdiff_t dims[2],int test[2]){
   
   printf("this is the ptrdiff_max: %td\n",PTRDIFF_MAX);
   printf("%p\n",dims);
   int *pdims = dims;
   printf("pdims adress: %p; and pdims content: %td\n",pdims, *pdims);

}

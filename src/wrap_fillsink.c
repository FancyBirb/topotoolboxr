#include <stddef.h>
#include <stdint.h>

#include "topotoolbox.h"

void wrap_fillsink(float *outputR,float *demR, int *dimsR){
   float * output = outputR;
   float * dem = demR;
   ptrdiff_t dims [2]={*dimsR,*(dimsR+1)};
   printf("dimsR adress %p; dimsR content %td\n",dims,*dims);
   fillsinks(output,dem,dims);
}

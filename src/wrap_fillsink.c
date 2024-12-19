#include <stddef.h>
#include <stdint.h>

#include "topotoolbox.h"

#include "topotoolboxr.h"

void wrap_fillsink(float *output, float *dem, int *bcR, int *dimsR){
   
   ptrdiff_t dims [2]= {dimsR[0], dimsR[1]};
   uint8_t bc = *bcR;
   fillsinks(output,dem,&bc,dims);
}

#include <stddef.h>
#include <stdint.h>

#include "topotoolbox.h"

#include "topotoolboxr.h"//    This is a working version to run gradient8
//

void wrap_gradient8(float *outputR, float *demR, float *cellsizeR,int *use_mpR, int *dimsR){ //might be usefull to not ask for a ptrdiff_t in the first place
                                 //and let the user input a long array

   // Uneccessary compicated
   ptrdiff_t dims [2]= {dimsR[0], dimsR[1]};

   float cellsize = *cellsizeR;
   int use_mpC= *use_mpR;
   float *output = outputR;
   float *dem = demR;
   gradient8(output,dem,cellsize,use_mpC,dims);
}

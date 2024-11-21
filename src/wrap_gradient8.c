#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include "topotoolbox.h"

#if defined(_OPENMP)
#include <omp.h>
#endif

//    This is a working version to run gradient8
//
void wrap_gradient8(float *outputR, float *demR, float *cellsizeR,int *use_mpR, ptrdiff_t *dimsR){ //might be usefull to not ask for a ptrdiff_t in the first place
                                 //and let the user input a long array
   
   // printf will be cleared in the future
   int *pdims = dimsR;
   printf("pdims adress: %td; and pdims content: %td\n",pdims, *(pdims));

   // Uneccessary compicated
   ptrdiff_t dims [2]= {(long)*(pdims),(long)*(pdims+1)};
   printf("dims adress: %td; and dims content: %td\n",dims, (dims[0]));

   float cellsize = *cellsizeR;
   int use_mpC= *use_mpR;
   float *output = outputR;
   float *dem = demR;
   printf("use_mpC: %d\n",use_mpC);
   gradient8(output,dem,cellsize,use_mpC,dims);
}

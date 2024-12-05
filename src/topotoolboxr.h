#ifndef TOPOTOOLBOXR_H
#define TOPOTOOLBOXR_H

void wrap_has_topotoolbox(int *a);

void wrap_gradient8(float *outputR,float *demR, float *cellsizeR,int *use_mpR, ptrdiff_t dimsR);

void wrap_fillsink(float *output, float *dem, int *bcR, int *dimsR);

#endif // TOPOTOOLBOXR_H

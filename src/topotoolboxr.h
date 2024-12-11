#ifndef TOPOTOOLBOXR_H
#define TOPOTOOLBOXR_H

void wrap_has_topotoolbox(int *a);

void wrap_gradient8(float *outputR,float *demR, float *cellsizeR,int *use_mpR, int* dimsR);

void wrap_fillsink(float *outputR,float *demR, long *dimsR);

#endif // TOPOTOOLBOXR_H

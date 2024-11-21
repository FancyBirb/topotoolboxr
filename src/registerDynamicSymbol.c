// RegisteringDynamic Symbols

#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include "topotoolbox.h"
#include "topotoolboxr.h"
#include "wrap_gradient8.h"

static const R_CMethodDef cMethods[] = {
   {"wrap_has_topotoolbox", (DL_FUNC) &wrap_has_topotoolbox, 1},
   {"wrap_gradient8",(DL_FUNC) &wrap_gradient8,5},
   {NULL,NULL,0,NULL},
};

void R_init_topotoolboxr(DllInfo *info) {
 /* Register the .C and .Call routines.
    No .Fortran() or .External() routines,
    so pass those arrays as NULL.
  */
  R_registerRoutines(info,
                    cMethods, NULL,
                    NULL, NULL);
  R_useDynamicSymbols(info, TRUE);
}

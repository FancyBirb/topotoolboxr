// RegisteringDynamic Symbols

#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include "topotoolboxr.h"
<<<<<<< HEAD
#include "wrap_gradient8.h"
#include "wrap_fillsink.h"
=======
>>>>>>> 1b82f6f (change to header files)

static const R_CMethodDef cMethods[] = {
   {"wrap_has_topotoolbox", (DL_FUNC) &wrap_has_topotoolbox, 1},
<<<<<<< HEAD
   {"wrap_gradient8",(DL_FUNC) &wrap_gradient8,5},
   {"wrap_fillsink",(DL_FUNC) &wrap_fillsink,3},
=======
   {"gradient8",(DL_FUNC) &wrap_gradient8,5},
>>>>>>> 73fe7b9 (rename of wrap_gradient8 and deletion of manual modifications to NAMESPACE)
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

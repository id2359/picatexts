#include "picat.h"

succ() {
    TERM n,x,result;
    long nv,value;

    n = picat_get_call_arg(1,2);
    x = picat_get_call_arg(2,2);
    
    if(!picat_is_integer(n)) {
        return PICAT_FALSE;
    }

    nv = picat_get_integer(n);
    value = nv + 1;

    result = picat_build_integer(value);
    return picat_unify(x,result);
}

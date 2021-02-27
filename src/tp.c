#include <stdlib.h>
#include "tp.h"

tp_vm *tp_init(int argc, char *argv[])
{
  tp_vm *tp = (tp_vm *)calloc(sizeof(tp_vm), 1);
  tp->time_limit = TP_NO_LIMIT;
  return tp;
}

tp_obj tp_string_atom(TP, const char *v)
{
  tp_obj r;
  return r;
}
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
  static tpd_string info = {0};
  tp_obj r;
  return r;
}

tp_obj tp_load(TP, const char *fname)
{
  tp_obj r;
  return r;
}

tp_obj tp_import(TP, tp_obj name, tp_obj code, tp_obj fname)
{
  tp_obj g;
  return g;
}

void tp_deinit(TP)
{
}
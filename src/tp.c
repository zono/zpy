#include <stdlib.h>
#include "tp.h"

tp_vm *tp_init(int argc, char *argv[])
{
  tp_vm *tp = (tp_vm *)calloc(sizeof(tp_vm), 1);
  tp->time_limit = TP_NO_LIMIT;
  return tp;
}
#include <stdio.h>
#include "tp.h"

int main(int argc, char **argv)
{
  tp_vm *tp = tp_init(argc, argv);

  tp_obj fname = tp_string_atom(tp, argv[1]);

  tp_obj code = tp_load(tp, argv[1]);

  tp_obj module = tp_import(tp, tp_string_atom(tp, "__main__"), code, fname);

  tp_deinit(tp);

  return 0;
}
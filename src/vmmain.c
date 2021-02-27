#include <stdio.h>
#include "tp.h"

int main(int argc, char **argv)
{
  tp_vm *tp = tp_init(argc, argv);
  tp_obj fname = tp_string_atom(tp, argv[1]);
  return 0;
}
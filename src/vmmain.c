#include <stdio.h>
#include "tp.h"

int main(int argc, char **argv)
{
  tp_vm *tp = tp_init(argc, argv);
  fprintf(stdout, "time_limit = %f\n", tp->time_limit);
  return 0;
}
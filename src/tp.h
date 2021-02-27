#ifndef TP_H
#define TP_H

#define TP_NO_LIMIT 1

typedef struct tp_vm
{
  double time_limit;
} tp_vm;

tp_vm *tp_init(int argc, char *argv[]);

#endif
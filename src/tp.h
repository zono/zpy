#ifndef TP_H
#define TP_H

#define TP_NO_LIMIT 1

#define TP tp_vm *tp

typedef struct tp_vm
{
  double time_limit;
} tp_vm;

typedef struct tp_obj
{
} tp_obj;

tp_vm *tp_init(int argc, char *argv[]);

tp_obj tp_string_atom(TP, const char *v);

#endif
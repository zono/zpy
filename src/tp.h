#ifndef TP_H
#define TP_H

#define TP_NO_LIMIT 1

#define TP tp_vm *tp

enum TPTypeID
{
  TP_STRING = 100
};

typedef struct tp_vm
{
  double time_limit;
} tp_vm;

typedef struct tp_obj
{
} tp_obj;

typedef union
{
  struct
  {
    unsigned int grey : 1;
    unsigned int black : 1;
  };
  int i;
} TPGCMask;

typedef struct tpd_string
{
  TPGCMask gci;
} tpd_string;

tp_vm *tp_init(int argc, char *argv[]);

tp_obj tp_string_atom(TP, const char *v);

tp_obj tp_load(TP, const char *);

tp_obj tp_import(TP, tp_obj name, tp_obj code, tp_obj fname);

void tp_deinit(TP);

#endif
#ifndef TP_H
#define TP_H

#include <stdio.h>

#define TP_NO_LIMIT 1

#define TP tp_vm *tp

enum TPTypeID
{
  TP_NONE = 0,
  TP_STRING = 100
};

struct stat
{
  off_t st_size;
};

typedef struct tp_vm
{
  double time_limit;
} tp_vm;

typedef struct TPTypeInfo
{
  enum TPTypeID typeid;
} TPTypeInfo;

typedef struct tp_obj
{
  TPTypeInfo type;
  void *info;
  union
  {
    double nfloat;
    long nint;
    void *ptr;
  };
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

typedef struct tpd_list
{
  TPGCMask gci;
  tp_obj *items;
  int len;
  int alloc;
} tpd_list;

typedef struct tpd_string
{
  TPGCMask gci;
} tpd_string;

tp_vm *tp_init(int argc, char *argv[]);

tp_obj tp_string_atom(TP, const char *v);

tp_obj tp_load(TP, const char *);

tp_obj tp_import(TP, tp_obj name, tp_obj code, tp_obj fname);

void tp_deinit(TP);

tp_obj tp_string_t(TP, int n);

tp_obj tp_exec(TP, tp_obj code, tp_obj globals);

#endif
#include <stdlib.h>
#include "tp.h"

tp_obj tp_None = {TP_NONE};

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

tp_obj tp_string_t(TP, int n)
{
  tp_obj r;
  return r;
}

char *tp_string_getptr(tp_obj s)
{
  return (char *)s.ptr;
}

tp_obj tp_load(TP, const char *fname)
{
  struct stat stbuf;
  //stat(fname, &stbuf);

  FILE *f = fopen(fname, "rb");
  if (!f)
  {
    printf("(tp_load) IOError\n");
    return tp_None;
  }

  long l = stbuf.st_size;

  tp_obj r = tp_string_t(tp, l);

  char *s = tp_string_getptr(r);

  fread(s, 1, l, f);

  fclose(f);

  return r;
}

void tpd_list_insertx(TP, tpd_list *self, int n, tp_obj v)
{
  /*
  if (self->len >= self->alloc)
  {
    tpd_list_realloc(tp, self, self->alloc * 2);
  }
  if (n < self->len)
  {
    memmove(&self->items[n + 1], &self->items[n], sizeof(tp_obj) * (self->len - n));
  }
  self->items[n] = v;
  self->len += 1;
  */
}

void tpd_list_appendx(TP, tpd_list *self, tp_obj v)
{
  tpd_list_insertx(tp, self, self->len, v);
}

void tp_enter_frame(TP, tp_obj lparams, tp_obj dparams,
                    tp_obj globals,
                    tp_obj code,
                    tp_obj args,
                    tp_obj defaults,
                    tp_obj *ret_dest)
{
  //tpd_list_appendx(tp, tp->frames, tp_frame_t(tp, lparams, dparams, globals, code, args, defaults, ret_dest));
}

tp_obj tp_exec(TP, tp_obj code, tp_obj globals)
{
  tp_obj r = tp_None;
  //tp_enter_frame(tp, tp_None, tp_None, globals, code, tp_None, tp_None, &r);
  //tp_run_frame(tp);
  return r;
}

tp_obj tp_import(TP, tp_obj name, tp_obj code, tp_obj fname)
{
  tp_obj g;
  tp_exec(tp, code, g);
  return g;
}

void tp_deinit(TP)
{
}
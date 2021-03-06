gc* gc_new(lval* v);
gc* gc_root(void);
int gc_add_value(lval* v);
int gc_pop(gc* g);
int gc_mark(lenv* env, int in_use);
int gc_mark_lval_elems(lval* v, int in_use);
int gc_sweep(int now);
int gc_mark_sweep(lenv* env);
int gc_mark_sweep_now(lenv* env);
int gc_stop();
int gc_count();

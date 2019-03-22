struct s { void *p; };
extern struct s* f(void);
void g(void **q)
{
    struct s *r = f();
    *q = &r->p;
}

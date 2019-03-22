int getcontext(ucontext_t *ucp);
int f (ucontext_t *ucp)
{
    getcontext ( ucp ) ;
}
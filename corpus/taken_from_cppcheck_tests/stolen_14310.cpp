int foo()
{
    jmp_buf env;
    int a;
    int val = setjmp(env);
    if(val)
        return a;
    a = 1;
    longjmp(env, 1);
}
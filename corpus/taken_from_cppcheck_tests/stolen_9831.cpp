struct F
{
    int x;
};
 
static void foo(F* f)
{
    if( f ) {}
    else { return; }
    (void)f->x;
}

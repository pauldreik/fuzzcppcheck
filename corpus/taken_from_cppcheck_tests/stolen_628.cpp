struct tt {
    char name[21];
} ;
void doswitch(struct tt *x)
{
    struct tt *tt=x;
    tt->name[22] = 123;
}
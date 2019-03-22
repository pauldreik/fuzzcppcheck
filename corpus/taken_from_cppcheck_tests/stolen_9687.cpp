struct ABC *abc;

static void foo()
{
    abc = malloc(sizeof(struct ABC));
    abc->a = malloc(10);
    return;
}
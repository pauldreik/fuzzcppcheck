struct ABC
{
    char str[1];
};

static void f()
{
    struct ABC* x = malloc(sizeof(struct ABC));
    x->str[1] = 0;}
struct ABC
{
    char str[1];
};

static void f()
{
    struct ABC* x = malloc(sizeof(struct ABC) + 10);
    x->str[11] = 0;}
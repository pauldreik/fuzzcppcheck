struct ABC
{
    char str[1];
    int x;
};

static void f()
{
    struct ABC* x = malloc(sizeof(struct ABC) + 10);
    x->str[1] = 0;}
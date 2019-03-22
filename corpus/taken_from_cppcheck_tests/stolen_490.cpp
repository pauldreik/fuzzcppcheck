struct ABC
{
    char str[1];
};

static void f()
{
    struct ABC* x = malloc(sizeof(ABC) + 10);
    x->str[11] = 0;}
struct ABC
{
    char str[1];
};

static void f()
{
    struct ABC* x = malloc(sizeof(ABC));
    x->str[1] = 0;}
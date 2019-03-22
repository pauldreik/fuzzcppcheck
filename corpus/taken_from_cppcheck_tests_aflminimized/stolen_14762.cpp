struct ABC
{
    int a;
    int b;
    int c;
};

static struct ABC abc[] = { {1, 2, 3} };

void foo()
{
    int a = abc[0].a;
    int b = abc[0].b;
    int c = abc[0].c;
}
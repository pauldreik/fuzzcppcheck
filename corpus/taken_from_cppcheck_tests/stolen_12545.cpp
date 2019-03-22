struct A
{
    char filename[128];
};

void foo()
{
    const char* filename = "hello";
    struct A a;
    snprintf(a.filename, 128, "%s", filename);
}
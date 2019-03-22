char a()
{
    char key;
    struct A msg = { .buf = {&key} };
    init(&msg);
    key++;
}
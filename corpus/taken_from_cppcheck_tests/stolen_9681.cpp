static void foo()
{
    struct ABC *abc = malloc(sizeof(struct ABC));
    abclist.push_back(abc);
    abc->a = malloc(10);
}
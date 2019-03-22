static void foo()
{
    struct ABC *abc = malloc(sizeof(struct ABC));
    abc->a = malloc(10);
    func(abc);
}
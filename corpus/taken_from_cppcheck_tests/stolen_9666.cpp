static ABC * foo()
{
    ABC *abc = malloc(sizeof(ABC));
    abc->a = malloc(10);
    abc->b = malloc(10);
    if (abc->b == 0)
    {
        return 0;
    }
    return abc;
}
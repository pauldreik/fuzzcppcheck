void f()
{
    char val[5];
    for (unsigned int i = 3; i < 5; --i) {
        val[i+1] = val[i];
    }
}
void f()
{
    char val[5];
    for (int i = 3; i < 5; --i) {
        val[i+1] = val[i];
    }
}
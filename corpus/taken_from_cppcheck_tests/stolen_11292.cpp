void f(int &c)
{
    c = 0;
    ++c;
    if (c>0) { ++c; }
    ++c;
}

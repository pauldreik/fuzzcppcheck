void f()
{
    set<int> files;
    set<int>::const_iterator current;
    for (current = files.begin(); current != files.end(); ++current)
    {
       assert(*current < 100)
    }
}
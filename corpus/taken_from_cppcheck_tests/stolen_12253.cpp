void f()
{
    std::vector<int>::const_iterator i;

    for (i=v.begin(); i!=v.end(); ++i)
    {
    }

    for (i=rhs.v.begin(); i!=rhs.v.end(); ++i)
    {
        v.push_back(*i);
    }
}
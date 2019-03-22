void f(vector< list<int> > &ints, unsigned int i)
{
    list<int>::iterator it;
    for(it = ints[i].begin(); it != ints[i].end(); it++) {
        if (*it % 2)
            it = ints[i].erase(it);
    }
}